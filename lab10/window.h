#pragma once
#include <QWidget>

class MainWindow : public QWidget
{
Q_OBJECT
public:
    MainWindow();
 protected:
 void paintEvent(QPaintEvent *event) override;

};