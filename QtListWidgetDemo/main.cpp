#include "QtListWidgetDemo.h"
#include <QtWidgets/QApplication>
#include "JawListLib.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	/*QtListWidgetDemo w;
	w.show();*/
	JawListLib  w;
	w.showList();
    return a.exec();
}
