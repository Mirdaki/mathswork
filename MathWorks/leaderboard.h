#ifndef LEADERBOARD_H
#define LEADERBOARD_H
#include <vector>
#include <QDialog>

namespace Ui {
class LeaderBoard;
}

class LeaderBoard : public QDialog{
    Q_OBJECT

public:
    explicit LeaderBoard(QWidget *parent = 0);
    ~LeaderBoard();
    void createBoard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LeaderBoard *ui;
    std::vector<std::string> scores;
};

#endif // LEADERBOARD_H
