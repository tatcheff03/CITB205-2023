#include "window.h"
#include <QPainter>
#include <QKeyEvent>
MainWindow::MainWindow(): sq (0,0,20,20),dir(20,0){


    setFixedSize(480, 320);
    ticker.start(800);
    connect(&ticker,&QTimer::timeout,this,&MainWindow::onTick);
}
void MainWindow::paintEvent(QPaintEvent *event)
{
QPainter p(this);
p.setBrush(Qt::black);
p.setPen(Qt::red);
p.drawRect(sq);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_Down:
        dir.setX(0);
        dir.setY(20);
        break;

        case Qt::Key_Up:
        dir.setX(0);
        dir.setY(-20);
        break;
        case Qt::Key_Left:
        dir.setX(-20);
        dir.setY(0);
        break;
        case Qt::Key_Right:
        dir.setX(20);
        dir.setY(0);
        break;
    
    default:
        break;
    }
}
void MainWindow::onTick(){
sq.translate(dir);
update();
}