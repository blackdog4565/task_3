/* #include <QtGlobal>
#if QT_VERSION < 0x050000
#include <QtGui>
#else
#include <QtWidgets>
#endif

#include <otherfile.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QWidget *widget = new QWidget;

    widget->show();

    return app.exec();
}*/


#include <MainWindow.h>
#include <QApplication>


int main(int argc, char *argv[])
{
 QApplication app(argc, argv);

 MainWindow *mainWindow = new MainWindow;
 mainWindow->showMaximized();



 return app.exec();
}
