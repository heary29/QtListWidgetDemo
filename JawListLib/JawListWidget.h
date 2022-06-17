#ifndef JAW_LIST_LIB_WIDGET_H
#define JAW_LIST_LIB_WIDGET_H

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include "ui_JawListWidget.h"
#include <QMetaType>
#include <QFileInfoList>


#define  DEF_JAW_LIST_ITEM_WIDTH    500
#define  DEF_JAW_LIST_ITEM_HIGH     30 

#define  DEF_JAW_ITEM_ICON_WIDTH    24
#define  DEF_JAW_ITEM_ICON_HIGH     24 

typedef struct Info_s
{
	int       fileState;         //0, 1, 2
    QFileInfo fileInfo;          //文件信息
}Info;
Q_DECLARE_METATYPE(Info);


class JawListWidget : public QWidget
{
    Q_OBJECT

public:
    JawListWidget(QWidget *parent = Q_NULLPTR);
    ~JawListWidget();
public slots:
    void updateItem(const QVariant varValue);
    void updateItem(QString str);
	void jawDoubleClicked(QListWidgetItem* item);
	void jawItemClicked(QListWidgetItem* item);
    void pathBtnClicked();
    void pathPressed();
	void on_action_openMenu_triggered();
	void on_action_DeleteMenu_triggered();

signals:
    void openItem(const QVariant varValue);
    void openItem(QString str);

private:
    bool initList(QString strpath);
    void initControler();
    void initMenu();
    void insertItem(int index, Info& info);
    void addItem(Info& info);
    void removeItem();
    bool isHasSelect();
    bool dirExist(QString fullPath);
    void showCurrentDirFiles();

    Ui::JawListWidget ui;
};


#endif   //JAW_LIST_LIB_WIDGET_H