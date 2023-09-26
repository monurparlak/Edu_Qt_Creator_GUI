#include <QString>
#include <QDebug>

#include <iostream>
#include <string>

/*
    QString()
    QString(const QChar *unicode, qsizetype size = -1)
    QString(QChar ch)
    QString(qsizetype size, QChar ch)
    QString(QLatin1StringView str)
    QString(const char8_t *str)
    QString(const char *str)
    QString(const QByteArray &ba)
    QString(const QString &other)
    QString(QString &&other)
    ~QString()
*/
int main()
{
    /* QString::ConstIterator */
    {
        qDebug() << "";
        QString started("QString::ConstIterator");
        qDebug() << "Started: " << started;

        QString str1("Alpha");
        qDebug() << "str1: " << str1;

        QString str2 = "Alpha"; // C++ 11 ext.
        qDebug() << "str2: " << str2;

        QString str3(5, QChar('X'));
        qDebug() << "str3: " << str3;

        QString str4(5, 'X');
        qDebug() << "str4: " << str4;
    }

    /* QString::isNull: Returns true if the string has no characters; otherwise returns false. */
    {
        qDebug() << "";
        QString started("QString::isNull");
        qDebug() << "Started: " << started;

        QString str1;
        qDebug() << "str1: " << str1.isNull();          // True
        qDebug() << "str1.isEmpty: " << str1.isEmpty(); // True

        QString str2("");
        qDebug() << "str2: " << str2.isNull();          // False
        qDebug() << "str2.isEmpty: " << str2.isEmpty(); // True

        QString str3("Bravo");
        qDebug() << "str3: " << str3.isNull();          // False
        qDebug() << "str3.isEmpty: " << str3.isEmpty(); // False

        qDebug() << QString().isEmpty();            // returns true
        qDebug() << QString("").isEmpty();          // returns true
        qDebug() << QString("x").isEmpty();         // returns false
        qDebug() << QString("abc").isEmpty();       // returns false
    }

    /* QString::insert: Inserts the string str at the given index position and returns a reference to this string. */
    {
        qDebug() << "";
        QString started("QString::insert");
        qDebug() << "Started: " << started;

        QString str = "Artos";
        str.insert(6, QString("Expert"));
        qDebug() << "str: " << str;
    }

    /* QString::remove: Removes n characters from the string, starting at the given position index, and returns a reference to the string. */
    {
        qDebug() << "";
        QString started("QString::remove");
        qDebug() << "Started: " << started;

        QString str1 = "ArtosExpert";
        str1.remove(3,8);
        qDebug() << "str1: " << str1;

        QString str2 = "ArtosExpert";
        qDebug() << "str2: " << str2.remove(QChar('r'), Qt::CaseInsensitive);
    }

    /* QString::section : This function returns a section of the string. */
    {
        qDebug() << "";
        QString started("QString::section");
        qDebug() << "Started: " << started;

        QString str;
        QString csv = "forename,middlename,surname,phone";
        QString path = "/usr/local/bin/myapp"; // First field is empty
        QString::SectionFlag flag = QString::SectionSkipEmpty;

        str = csv.section(',', 2, 2);   // str == "surname"
        str = path.section('/', 3, 4);  // str == "bin/myapp"
        str = path.section('/', 3, 3, flag); // str == "myapp"
        qDebug() << "str: " << str;
    }

    /* QString::replace : Replaces n characters beginning at index position with the string after and returns a reference to this string. */
    {
        qDebug() << "";
        QString started("QString::replace");
        qDebug() << "Started: " << started;

        QString str = "Alpha; Bravo; Charlie; Delta";
        str.replace(';',',');
        qDebug() << "str(before): " << str;

        str.replace("Bravo", "Foxtrot");
        qDebug() << "str(after): " << str;

        QString x = "Say yes!";
        QString y = "no";
        qDebug() << x.replace(4, 3, y);
        // x == "Say no!"
    }

    /* QString::indexOf : Returns the index position of the first occurrence of the string str in this string, searching forward from index position from. Returns -1 if str is not found. */
    {
        qDebug() << "";
        QString started("QString::indexOf");
        qDebug() << "Started: " << started;

        int index;
        QString str("QString::indexOf");

        index = str.indexOf("indexOf");
        qDebug() << "index: " << index;

        index = str.lastIndexOf('d');
        qDebug() << "index: " << index;
        index = str.indexOf('d');
        qDebug() << "index: " << index;

        QString x = "sticky question";
        QString y = "sti";
        qDebug() << x.indexOf(y);
        qDebug() << x.indexOf(y, 1);
    }

    /* QString::mid : Returns a string that contains n characters of this string, starting at the specified position index. */
    {
        qDebug() << "";
        QString started("QString::mid");
        qDebug() << "Started: " << started;

        QString str("QString::mid");
        QString strOut;

        strOut = str.mid(9,9);
        qDebug() << "strOut: " << strOut;
        
        strOut = str.mid(9);
        qDebug() << "strOut: " << strOut;
    }

    /* QString::rightJustified : Returns a string of size() width that contains the fill character followed by the string. */
    /* QString::leftJustified : Returns a string of size width that contains this string padded by the fill character. */
    {
        qDebug() << "";
        QString started("QString::rightJustified & leftJustified");
        qDebug() << "Started: " << started;

        

    }

    return 0;
}











