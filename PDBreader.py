from Crypto import Random
from Crypto.Cipher import AES
import getpass

print("\nclass PDBreader:\n	def setPass (self)           #getpass()\n	def loadPDB (self, filename) #open(\"db/\"+filename, \"rb\")\n	def names   (self)\n	def showPass(self, index)\n")

class PDBreader:

	password="\0"
	PDB="\0"
	records=[]
	recordscount=0

	def parseRecord(self):
		if(len(self.PDB)==0):
			return 1
		newrecord=[]
		offset=[1,0,0,0]
		size=  [0,0,0,0]
		size[0]=self.PDB[0]+1
		offset[1]=size[0]+1
		if(len(self.PDB)<offset[1]+2):
			print(offset)
			print(size)
			return 2
		size[1]=self.PDB[offset[1]]<<8
		size[1]+=self.PDB[offset[1]+1]
		if(size[1]>8000):
			print(offset)
			print(size)
			return(3)
		offset[1]+=2
		offset[2]=offset[1]+size[1]
		if(len(self.PDB)<offset[2]+1):
			print(offset)
			print(size)
			return 4
		size[2]=self.PDB[offset[2]]
		if(size[2]>128):
			print(offset)
			print(size)
			return 5
		offset[2]+=1
		offset[3]=offset[2]+size[2]
		if(len(self.PDB)<offset[3]+1):
			print(offset)
			print(size)
			return 6
		size[3]=self.PDB[offset[3]]
		if(size[3]>128):
			print(offset)
			print(size)
			return 7
		offset[3]+=1
		if(len(self.PDB)<offset[3]+size[3]):
			print(offset)
			print(size)
			return 8
		rawdata=[]
		for i in range(0,4):
			rawdata+=[self.PDB[offset[i]:size[i]+offset[i]]]
		self.records+=[rawdata]
		self.PDB=self.PDB[size[0]+size[1]+size[2]+size[3]+5:]
		return 0

	def names(self):
		for i in range(0, len(self.records)):
			print(str(b"["+bytes(str(i), encoding="ascii")+b"]  "+self.records[i][0], encoding="ascii"))
			print(str(b"     "+self.records[i][1], encoding="ascii"))

	def showPass(self, index):
		if(type(index)!=type(2)):
			print("index type should be int")
			return
		if(index>=len(self.records)):
			print("there is no password under that index")
			return
		print(str(b"-----"+self.records[index][0]+b"-----", encoding="ascii"))
		print(str(b"  "+self.records[index][1]+b"\n", encoding="ascii"))
		print(str(b"login=   \""+self.records[index][2]+b"\"\n", encoding="ascii"))
		print(str(b"password=\""+self.records[index][3]+b"\"", encoding="ascii"))
		print("-"*(len(self.records[index][0])+10))

	def setPass(self):
		self.password=getpass.getpass()
		if(len(self.password)==0):
			self.password=0
			return
		if ((len(self.password)!=32)and(len(self.password)!=48)and(len(self.password)!=64)):
			print("		password can be either 16, 24 or 32 bytes long, not "+str(len(self.password)/2.0)+" (type it in hexa)\n")
			return
		self.password=bytearray(self.password, encoding="ascii")
		for i in range(0, len(self.password)):
			if(self.password[i]>90):
				self.password[i]-=32
			if(self.password[i]>60):
				self.password[i]-=7
			if((self.password[i]<48)or(self.password[i]>63)):
				print("		this is not hexa, try again\n")
				return
			self.password[i]-=48
		for i in range(0, len(self.password)):
			if(i%2):
				self.password[i>>1]+=self.password[i]
			else:
				self.password[i>>1]=self.password[i]<<4
		self.password=self.password[0:len(self.password)>>1]


	def loadPDB(self, filename, segment_size=8):
		succeeded=0
		file=open("db/"+filename, "rb")
		try:
			self.PDB=file.read()
			succeeded=1
		finally:
			file.close()
		if(succeeded==0):
			print("		failed to load the file\n")
			return
		if(type(self.password)==str):
			print("		please, run PDBreader::setPass() first")
			return
		if((type(self.password)==bytearray)and((len(self.password)==16)or(len(self.password)==24)or(len(self.password)==32))):
			iv=self.PDB[0:16]
			self.PDB=AES.new(bytes(self.password), AES.MODE_CFB, iv, segment_size=segment_size).decrypt(self.PDB)[16:]
			if(self.PDB[:3]!=b"PDB"):
				print("		failed to decipher(wrong header)")
				return
			if(len(self.PDB)<16):
				print(" 	umm... too small file?")
				return
			padding=self.PDB[-16:]
			if(padding[-1]>16):
				print(" 	padding invalid")
				return
			padding=padding[:-padding[-1]]
			self.PDB=self.PDB[3:-16]+padding

			self.recordscount=(self.PDB[0]<<8)+self.PDB[1]
			self.PDB=self.PDB[2:]	
			while 1:
				out=self.parseRecord()
				if(out==1):
					break
				if(out!=0):
					print(" 	error parsing records ("+str(out)+")")
					break
		else:
			print("		don't mess with password manually please")
			return
		



