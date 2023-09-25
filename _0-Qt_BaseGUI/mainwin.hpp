#pragma once

#include <QWidget> /* Make it Main Frame */

class QPushButton;
class QLabel;

class MainWin : public QWidget {
    public:
        MainWin();
    private:
        QPushButton *m_pushButton;
        QLabel *m_label;
};

