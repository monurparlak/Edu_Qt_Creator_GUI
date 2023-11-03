
#include <QApplication>

#include <iostream>
#include <stdio.h>
#include <QDebug>
#include <QVector>

/* QVector (std::Vector to same things in C++)
    QVector(InputIterator first, InputIterator last)
    QVector(std::initializer_list<T> args)
    QVector(QVector<T> &&other)
    QVector(const QVector<T> &other)
    QVector(int size, const T &value)
    QVector(int size)
    QVector() */

int main()
{
    /* Ex_1 */
    {
        qDebug() << "";
        QString started("QVector Ex_1");
        qDebug() << "Started: " << started;

        QVector<QString> vector1(5);
        qDebug() << "vector1: " << vector1;
        qDebug() << "-------------------";

        QVector<int> vector2(5, 2);
        qDebug() << "vector2: " << vector2;
        qDebug() << "-------------------";

        QVector<QString> vector3(5, "QVector");
        qDebug() << "vector3: " << vector3;
        qDebug() << "-------------------";

        QVector<int> vector4(std::move(vector4));
        qDebug() << "vector4: " << vector4;
        qDebug() << "-------------------";

    }

    return 0;
}