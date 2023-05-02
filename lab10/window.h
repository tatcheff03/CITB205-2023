#pragma once
#include <QWidget>
#include <QTimer>
#include <QEvent>
class MainWindow : public QWidget
{
Q_OBJECT
public:
    MainWindow();
 protected:
 void paintEvent(QPaintEvent *event) override;

 private slots:
 void onTick();

 
 private:
 QTimer ticker;
 QRect sq;
 QPoint dir;


};