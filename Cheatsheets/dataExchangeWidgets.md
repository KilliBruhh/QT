# Data exchange between mainWindow and a widget

## info
- To send data between a MainWindow and a custom widget in Qt, you can create custom signals and slots, allowing you to establish communication between these components. Here's a step-by-step guide:

- Let's assume you have a MainWindow and a custom widget named CustomWidget.
## Create a Custom Signal in CustomWidget class:
- In your CustomWidget class header file (customwidget.h), declare a custom signal that will be emitted when something happens in the widget that the MainWindow needs to be notified about. For example:
```cpp
#include <QWidget>

class CustomWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CustomWidget(QWidget *parent = nullptr);

signals:
    void dataChanged(const QString &newData);

// ...
};
```

## Emit the Signal in CustomWidget:
- In the implementation file (customwidget.cpp) of your CustomWidget, you can emit the dataChanged signal whenever appropriate. For instance:
```cpp
#include "customwidget.h"

CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent)
{
    // ...
}

void CustomWidget::someEventOrAction()
{
    // ... Do something that changes the data ...

    // Emit the signal with the updated data
    emit dataChanged("New data from CustomWidget");
}
```

## Connect the Signal in MainWindow:
- In your MainWindow class, you'll want to connect the signal emitted by the CustomWidget to a slot in the MainWindow so that it can react to the data change:
```cpp

#include <QMainWindow>
#include "customwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void handleCustomWidgetData(const QString &newData);

private:
    CustomWidget *customWidget;
};
```

## Implement the Slot in MainWindow:
- In the implementation of your MainWindow (mainwindow.cpp), define the slot to handle the data change from the CustomWidget:
```cpp

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    customWidget = new CustomWidget(this);
    setCentralWidget(customWidget);

    // Connect the signal to the slot
    connect(customWidget, &CustomWidget::dataChanged, this, &MainWindow::handleCustomWidgetData);
}

void MainWindow::handleCustomWidgetData(const QString &newData)
{
    // Handle the updated data from the CustomWidget
    // For example, update UI elements in the MainWindow
}
```

- With these steps, your MainWindow is now connected to your CustomWidget, and it will be notified whenever the dataChanged signal is emitted from the CustomWidget. This allows you to send data between the MainWindow and the custom widget efficiently.