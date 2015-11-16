#ifndef CLIENTSOCK_H
#define CLIENTSOCK_H

#include <QTcpSocket>
#include <QObject>
#include <QDebug>


class clientSock : public QObject
{
    Q_OBJECT
private:
    QTcpSocket * m_sock;
public:
    explicit clientSock(QObject * parent = 0);
public slots:
    void connected();
    void read();
};

#endif // CLIENTSOCK_H
