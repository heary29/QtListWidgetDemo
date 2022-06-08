#include "QtListWidgetDemo.h"


QtListWidgetDemo::QtListWidgetDemo(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	this->setWindowFlags(Qt::WindowCloseButtonHint);
	jaw = new JawListLib();
	jaw->showList();
}

QtListWidgetDemo::~QtListWidgetDemo()
{
	delete jaw;
}