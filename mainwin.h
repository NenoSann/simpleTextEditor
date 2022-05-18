#ifndef MAINWIN_H
#define MAINWIN_H

#include "qlabel.h"
#include "qprogressbar.h"
#include <QMainWindow>
#include <QWidget>
#include "qspinbox.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWin; }
QT_END_NAMESPACE

class MainWin : public QMainWindow
{
    Q_OBJECT

public:
    MainWin(QWidget *parent = nullptr);
    ~MainWin();

private:
    Ui::MainWin *ui;
    QLabel *fLabCurFile;    //显示当前文件的Label
    QProgressBar *progressBar1; //设置progressBar
    QSpinBox *spinbox1; //set a spinbox to change font dotsize.

};
#endif // MAINWIN_H
