#include "greeter.h"
#include <QPainter>
#include <QPaintEvent>

Greeter::Greeter() : QWidget(), font("Sans Serif", 50, QFont::Bold) {
    setFixedSize(300, 100);
}

void Greeter::setGreeting(const QString &text)
{
    greeting = text;
    update();
}

void Greeter::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter(this);
    painter.setBrush(palette().light().color());
    painter.drawRect(rect());
    painter.setPen(QPen(Qt::cyan));
    painter.setFont(font);
    painter.drawText(rect(), Qt::AlignCenter, greeting);
}