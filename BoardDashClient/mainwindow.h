 #ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QByteArray>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QTimer *reconnectTimer;
    int reconnectAttempts;
    static constexpr int MAX_RECONNECT_ATTEMPTS = 5;

private slots:
    void onConnected();
    void onReadyRead();
    void onDisconnected();
    void onReconnect();
};
#endif // MAINWINDOW_H
