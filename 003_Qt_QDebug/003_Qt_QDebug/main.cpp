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

    /* Ex_2 */
    {
        qDebug() << "";
        QString started("QDebug Ex_2");
        qDebug() << "Started: " << started;

        int a = 5;
        int b = 10;

        qDebug() << a << b;
        qDebug().nospace() << "a: " << a << " b: " << b;
        qDebug().maybeSpace() << a << b;
        qDebug() << "------------------";
        qDebug().maybeQuote() << a << b;
        qDebug() << "------------------";
        qDebug().quote() << QString("Quote Example");
        qDebug() << "------------------";
        qDebug().noquote() << QString("Quote Example");
        qDebug() << "------------------";
        QPoint point(5, 10);
        qDebug() << point;
        qDebug() << "------------------";
        qDebug() << "Date:" << QDate::currentDate();
        qDebug() << "Types:" << QString("String") << QChar('x') << QRect(0, 10, 50, 40);
        qDebug() << "Custom coordinate type:" << point;
        qDebug() << "------------------";
        qDebug("Tester %d", 10);
        qDebug() << "------------------";
        
    }
    
    return 0;
}
