#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include <QDialog>
#include "conndb.h"
#include "wordencriptate.h"
#include<wordselect.h>


namespace Ui {
class GameView;
}

class GameView : public QDialog
{
    Q_OBJECT
private:
    int error = 0;
public:
    explicit GameView(QWidget *parent = nullptr);
    ~GameView();
    static WordEncriptate* wordInGame;
    static QString dica, palavra;
    static int limite;
    static WordSelect* novo;
    void resetButtons();
    void disableButton(QPushButton* button);
    int getError();
    void setError();
    void resetError();
    void GameOverCheck ();
    void WordChange ();
    void hits(int HitsBackUp);


private slots:
    void on_btn_A_clicked();

    void on_btn_B_clicked();

    void on_btn_C_clicked();

    void on_btn_D_clicked();

    void on_btn_E_clicked();

    void on_btn_F_clicked();

    void on_btn_G_clicked();

    void on_btn_H_clicked();

    void on_btn_I_clicked();

    void on_btn_J_clicked();

    void on_btn_K_clicked();

    void on_btn_L_clicked();

    void on_btn_M_clicked();

    void on_btn_N_clicked();

    void on_btn_O_clicked();

    void on_btn_P_clicked();

    void on_btn_Q_clicked();

    void on_btn_R_clicked();

    void on_btn_S_clicked();

    void on_btn_T_clicked();

    void on_btn_U_clicked();

    void on_btn_V_clicked();

    void on_btn_W_clicked();

    void on_btn_X_clicked();

    void on_btn_Y_clicked();

    void on_btn_Z_clicked();

private:
    Ui::GameView *ui;
};




#endif // GAMEVIEW_H
