#include "window.h"

#include <QtWidgets>

Window::Window()
{
    QIcon icon(":/images/rickroll.jpg");
    setWindowIcon(icon);
    button = new QPushButton(tr(" surprise "));
    connect(button, &QPushButton::clicked, this, &Window::sayHi);
    greeter = new Greeter();
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(button);
    mainLayout->addWidget(greeter);
    setLayout(mainLayout);
    setWindowTitle(tr(" say hello "));
}

void Window::sayHi() {
    greeter->setGreeting(tr("Kurva!"));
}
