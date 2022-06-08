#ifndef JAW_LIST_LIB_H
#define JAW_LIST_LIB_H

#include "jawlistlib_global.h"
#include <QWidget>

class JawListWidget;
class JAWLISTLIB_EXPORT JawListLib:public QWidget
{
    Q_OBJECT
public:
    JawListLib(QWidget* parent = Q_NULLPTR);
    ~JawListLib();
    JawListWidget* getListWidget();
    void showList();
    void hideList();
signals:
    void openJawItem(QString);

public slots:
    void updateItem(QString str);
    void openJawItemSlot(QString str);

private:
    JawListWidget* m_jawListWidget_;
};


#endif   //JAW_LIST_LIB_WIDGET_H