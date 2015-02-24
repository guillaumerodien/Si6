#ifndef MAFENETREPRINCIPALE_H
#define MAFENETREPRINCIPALE_H

#include <QMainWindow>

namespace Ui {
class MafenetrePrincipale;
}

class MafenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit MafenetrePrincipale(QWidget *parent = 0);
    ~MafenetrePrincipale();

private slots:
    void on_checkBox_clicked(bool checked);

    void on_pushButton_clicked();

    void on_dial_valueChanged(int value);

private:
    Ui::MafenetrePrincipale *ui;
    QPalette* palette;
};

#endif // MAFENETREPRINCIPALE_H
