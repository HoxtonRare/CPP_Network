#include <QApplication>
#include "MainClient.h"

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    MainClient     client("localhost", 2323);

    client.show();

    return app.exec();
}
