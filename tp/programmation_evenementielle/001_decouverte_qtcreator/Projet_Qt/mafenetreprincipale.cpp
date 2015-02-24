#include "mafenetreprincipale.h"
#include "ui_mafenetreprincipale.h"

MafenetrePrincipale::MafenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MafenetrePrincipale)
{
    palette = new QPalette();
    ui->setupUi(this);
}

MafenetrePrincipale::~MafenetrePrincipale()
{
    delete ui;
}

void MafenetrePrincipale::on_checkBox_clicked(bool checked)
{
    if(checked)
        this->showFullScreen();
    else
        this->showNormal();
}

void MafenetrePrincipale::on_pushButton_clicked()
{
    qApp->quit();
}

void MafenetrePrincipale::on_dial_valueChanged(int value)
{
    value *= 255 / 100.;
    palette->setColor(QPalette::WindowText,QColor(value,0,0));
    ui->lcdNumber->setPalette(*palette);
}
