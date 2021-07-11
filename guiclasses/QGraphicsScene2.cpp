#include "QGraphicsScene2.h"
#include <QDebug>

QGraphicsScene2::QGraphicsScene2(QObject *parent): QGraphicsScene(parent){scaleMultiplerState=0;}
QGraphicsScene2::QGraphicsScene2(qreal x, qreal y, qreal width, qreal height, QObject *parent): QGraphicsScene(x, y, width, height, parent){scaleMultiplerState=0;}
QGraphicsScene2::QGraphicsScene2(const QRectF &sceneRect, QObject *parent): QGraphicsScene(sceneRect, parent){scaleMultiplerState=0;}


void QGraphicsScene2::wheelEvent(QGraphicsSceneWheelEvent *wheelEvent){
    QList<QGraphicsItem *> itemslist=items();
    if(!itemslist.isEmpty()){
        QGraphicsItem *item=itemslist.takeFirst();
        if(item->scale()==1)
            scaleMultiplerState=0;

        float originalScale=item->scale();
        QPointF deltaMouse=QPointF(mainView->width(), mainView->height())/2-mainView->mapFromScene(wheelEvent->scenePos());

        item->setScale(scaleMultiplerState?((item->scale()/3)*(wheelEvent->delta()/120.0f+3)):(item->scale()*(wheelEvent->delta()/320.0f+9.0f/8)));
        scaleMultiplerState=!scaleMultiplerState;
        setSceneRect(itemsBoundingRect());
        mainView->centerOn(wheelEvent->scenePos()*(item->scale()/originalScale)+deltaMouse);
    }

    wheelEvent->accept();
}



///home/nmbpjnwwbt/Desktop/graphics/IMG_20160415_184548[1].bmp
