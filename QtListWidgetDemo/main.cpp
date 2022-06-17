#include "QtListWidgetDemo.h"
#include <QtWidgets/QApplication>
#include "JawListLib.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	/*QtListWidgetDemo w;
	w.show();*/
	JawListLib  w;
	w.setWindowFlags(Qt::WindowCloseButtonHint);
	w.showList();
    return a.exec();
}
