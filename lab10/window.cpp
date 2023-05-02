#include "window.h"
#include <QPainter>
MainWindow::MainWindow(): sq (0,0,20,20),dir(20,0){


    setFixedSize(480, 320);
    ticker.start(1000);
    connect(&ticker,&QTimer::timeout,this,&MainWindow::onTick);
}
void MainWindow::paintEvent(QPaintEvent *event)
{
QPainter p(this);
p.setBrush(Qt::black);
p.setPen(Qt::red);
p.drawRect(sq);
}
void MainWindow::onTick(){
sq.translate(dir);
update();
}