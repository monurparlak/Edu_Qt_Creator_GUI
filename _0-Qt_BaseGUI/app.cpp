#include <QApplication> /* Application contain exec */
#include "mainwin.hpp"

int main(int argc, char * argv[])
{ 
    
    QApplication app(argc, argv);
    
    MainWin mainWin; /* do main window */
    mainWin.show(); /* show me the main window */

    app.exec(); /* standard cpp template within executive */

    return 0;
}
