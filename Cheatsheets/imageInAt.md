# add image in Qt --> Stackoverflow

```cpp
#include <QPixmap>

QPixMap pix("path/to/image");
ui-->label->setPixMap(pic)
```

## add image chatGbt

```cpp
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtGui/QPixmap>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget mainWindow;
    QVBoxLayout *mainLayout = new QVBoxLayout(&mainWindow);

    QLabel *imageLabel = new QLabel(&mainWindow);
    QPixmap pixmap(":/path/to/your/image.png");
    imageLabel->setPixmap(pixmap);

    mainLayout->addWidget(imageLabel);
    mainWindow.setLayout(mainLayout);
    mainWindow.show();

    return app.exec();
}

```