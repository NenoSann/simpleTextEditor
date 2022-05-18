#include "mainwin.h"
#include "./ui_mainwin.h"

MainWin::MainWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWin)
{
    ui->setupUi(this);
}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::initUI()
{
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150); //set the mim widet to 150

}

