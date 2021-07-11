#ifndef QGRAPHICSSCENE2_H
#define QGRAPHICSSCENE2_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsItem>

class QGraphicsScene2: public QGraphicsScene{
    Q_OBJECT

    public:
        explicit QGraphicsScene2(QObject *parent=0);
        explicit QGraphicsScene2(qreal x, qreal y, qreal width, qreal height, QObject *parent=0);
        explicit QGraphicsScene2(const QRectF &sceneRect, QObject *parent=0);


        QGraphicsView *mainView;
    private:
        void wheelEvent(QGraphicsSceneWheelEvent *wheelEvent);

        bool scaleMultiplerState;
};
#endif // QGRAPHICSSCENE2_H
