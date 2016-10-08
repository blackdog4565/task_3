#include <MainWindow.h>

#include <QCoreApplication>
#include <QString>
#include <QFileDialog>
#include <QImage>
#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent)
 : QMainWindow(parent)
{
 // создаем кнопку
 m_button = new QPushButton("My Button", this);
 // устанавливаем размер и положение кнопки
 m_button->setGeometry(QRect(QPoint(100, 100),
 QSize(200, 50)));

// подключаем сигнал к соответствующему слоту
 connect(m_button, SIGNAL (released()), this, SLOT (handleButton()));
}



void MainWindow::handleButton()
{
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open File"), "", tr("JPEG (*.jpg *.jpeg);;PNG (*.png)"));
    imageObject = new QImage();
    imageObject->load(imagePath);

    image = QPixmap::fromImage(*imageObject);
    scene = new QGraphicsScene(this);

    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->GraphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{

}
