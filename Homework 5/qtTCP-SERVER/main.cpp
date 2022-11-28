#include <QtWidgets>
#include <QApplication>

#include "MainServer.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainServer     server(2323);

    server.show();

    return app.exec();
}
