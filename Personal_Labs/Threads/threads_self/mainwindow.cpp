#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , thread(nullptr)
    , worker(nullptr)
{
    ui->setupUi(this);
    // Create a central widget and set it to the main window
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Create layout and widgets
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    startButton = new QPushButton("Start Counting", centralWidget);
    countLabel = new QLabel("Count: 0", centralWidget);

    layout->addWidget(startButton);
    layout->addWidget(countLabel);

    centralWidget->setLayout(layout);

    // Connect the start button signal to a slot
    connect(startButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStartButtonClicked() {
    // If wokrer already excists?? delete them and thread??
    qDebug() << "onStartButtonClicked";
    if(thread) {
        thread->quit();
        thread->wait();
        delete thread;
        delete worker;
    }

    worker = new Worker();
    thread = new QThread();

    connect(thread, &QThread::started, worker, &Worker::process);
    connect(worker, &Worker::countUpdated, this, &MainWindow::updateCount);
    connect(worker, &Worker::finished, thread, &QThread::quit);
    connect(worker, &Worker::finished, worker, &Worker::deleteLater);
    connect(thread, &QThread::finished, thread, &QThread::deleteLater);

    thread->start();
}

void MainWindow::updateCount(int count) {
    countLabel->setText("Count: " + QString::number(count));
}
