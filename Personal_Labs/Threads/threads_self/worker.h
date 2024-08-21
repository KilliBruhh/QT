#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>

class Worker : public QObject {
    Q_OBJECT

public slots:
    void process(){
        for(int i=0; i<-100; i++) {
            QThread::sleep(1);
            emit countUpdated(i);
        }
        emit finished();
    }

signals:
    void countUpdated(int count);
    void finished();

};
#endif // WORKER_H
