#ifndef YOUWINVIEW_H
#define YOUWINVIEW_H

#include <QDialog>
#include<QMovie>
#include<QLabel>

namespace Ui {
class YouWinView;
}

class YouWinView : public QDialog
{
    Q_OBJECT

public:
    explicit YouWinView(QWidget *parent = nullptr);
    ~YouWinView();

private slots:
    void on_pushButton_clicked();

private:
    Ui::YouWinView *ui;
};

#endif // YOUWINVIEW_H
