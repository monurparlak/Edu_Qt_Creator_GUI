#include <QApplication>

#include <QDebug>
#include <QFile>
#include <iostream>
#include <QPoint>
#include <QDate>
#include <QRect>

/* QDebug& operator << (const QDebug &, const Qxxx &);
QDebug(QIODevice *device)
QDebug(QString *string)
QDebug(QtMsgType t)
QDebug(const QDebug &o) */

int main()
{
    /* Ex_1 */
    {
        qDebug() << "";
        QString started("QDebug Ex_1");
        qDebug() << "Started: " << started;

        QFile file("out.txt");

        if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            std::cout << "Cannot open file" << std::endl;
            exit(EXIT_FAILURE);
        }

        QDebug debug(&file);
        debug << "QDebug Tester" << 111;
        
        qDebug() << "debug.autoInsertSpaces: " << debug.autoInsertSpaces();
        debug.setAutoInsertSpaces(false);
        qDebug() << "debug.autoInsertSpaces: " << debug.autoInsertSpaces();
        debug.setAutoInsertSpaces(true);
        debug << "555555";
        debug.setAutoInsertSpaces(false);
        debug << "666666";
        debug << "777777";

        qDebug() << "verbosity: " << debug.verbosity();
        debug.setVerbosity(7);
        qDebug() << "verbosity: " << debug.verbosity();
        debug.resetFormat();
    }
    
    return 0;
}
