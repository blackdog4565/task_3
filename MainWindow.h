#ifndef OTHERFILE_H
#define OTHERFILE_H

#include <QMainWindow>
#include <QPushButton>
#include <QGraphicsScene>

namespace Ui {
 class MainWindow;
}

class MainWindow : public QMainWindow
{
 Q_OBJECT

public:
 explicit MainWindow(QWidget *parent = 0);
 virtual ~MainWindow();

private slots:
 void handleButton();

private:
    QPushButton *m_button;
    Ui::MainWindow *ui;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;
};


#endif // OTHERFILE_H


