#include <QApplication>
#include <QChar>
#include <QDebug>

/*
QChar()
QChar(ushort code)
QChar(uchar cell, uchar row)
QChar(short code)
QChar(uint code)
QChar(int code)
QChar(QChar::SpecialCharacter ch)
QChar(QLatin1Char ch)
QChar(char16_t ch)
QChar(wchar_t ch)
QChar(char ch)
QChar(uchar ch)
*/

int main()
{
    QChar ch1('X');
    qDebug() <<  "ch1: " << ch1;

    QChar ch2(123);
    qDebug() <<  "ch2: " << ch2;

    qDebug() << "QChar::NULL: " << QChar::Null;
    qDebug() << QChar::Category(QChar::Script_Batak);

    QChar ch4(QChar::Null);
    qDebug() << "ch4: " << ch4;

    // isNumber: Returns true if the character is a number (Number_* categories, not just 0-9); otherwise returns false.
    {
        QChar ch10('5');
        qDebug() << "ch10: " << ch10.isNumber();

        QChar ch11('-5');
        qDebug() << "ch11: " << ch11.isNumber();

        QChar ch12('55');
        qDebug() << "ch12: " << ch12.isNumber();
    }

    // isNull: Returns true if the character is the Unicode character 0x0000 ('\0'); otherwise returns false.
    {
        QChar ch20('K');
        QChar ch21('\0');

        qDebug() << "ch20: " << ch20.isNull();
        qDebug() << "ch21: " << ch21.isNull();

        //isUpper: Returns true if the character is an uppercase letter, for example category() is Letter_Uppercase.
        //isLower: Returns true if the character is a lowercase letter, for example category() is Letter_Lowercase.
        {
            QChar ch30('b');
            QChar ch31;
            ch31 = ch30.toUpper();
            qDebug() << "ch31: " << ch31;

            QChar ch32('B');
            QChar ch33;
            ch33 = ch32.toLower();
            qDebug() << "ch33: " << ch33;
        }
    }

    return 0;
}
