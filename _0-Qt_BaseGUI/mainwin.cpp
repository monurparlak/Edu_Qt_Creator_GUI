#include "mainwin.hpp"
#include <QPushbutton>
#include <QLabel>

MainWin::MainWin() : QWidget(NULL)
{
    m_pushButton = new QPushButton("Cancel", this); /* Added Button */
    m_pushButton->move(100,100); /* Setting position */

    m_label = new QLabel("Test Message", this);
    m_label->setFont(QFont("Times", 15, QFont::Bold));
    m_label->move(100,20);
}