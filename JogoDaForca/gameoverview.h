#ifndef GAMEOVERVIEW_H
#define GAMEOVERVIEW_H

#include <QDialog>
#include<QMovie>
#include<QLabel>

namespace Ui {
class GameOverView;
}

class GameOverView : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverView(QWidget *parent = nullptr);
    ~GameOverView();

private:
    Ui::GameOverView *ui;
};

#endif // GAMEOVERVIEW_H
