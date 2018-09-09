#include <QApplication>
#include "mainwindow.h"
#include "r_progressbarwnd.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    R_ProgressBarWnd progress;

    progress.show();

    return a.exec();
}
