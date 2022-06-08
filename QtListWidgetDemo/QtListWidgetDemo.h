#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtListWidgetDemo.h"
#include "JawListLib.h"

class QtListWidgetDemo : public QMainWindow
{
    Q_OBJECT

public:
    QtListWidgetDemo(QWidget *parent = Q_NULLPTR);
    ~QtListWidgetDemo();

private:
    Ui::QtListWidgetDemoClass ui;
    JawListLib* jaw;
};
