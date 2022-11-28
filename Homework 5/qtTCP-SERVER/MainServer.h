#pragma once

#include <QWidget>

class QTcpServer;
class QTextEdit;
class QTcpSocket;

// ======================================================================
class MainServer : public QWidget {
Q_OBJECT
private:
    QTcpServer* m_ptcpServer;
    QTextEdit*  m_ptxt;
    quint16     m_nNextBlockSize;

private:
    void sendToClient(QTcpSocket* pSocket, const QString& str);

public:
    MainServer(int nPort, QWidget* pwgt = 0);

public slots:
    virtual void slotNewConnection();
            void slotReadClient   ();
};
