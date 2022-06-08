#include "JawListWidget.h"

#include <QDir>
#include <QDebug>
#include <QAction>
#include <QMessageBox>


JawListWidget::JawListWidget(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
    this->setWindowFlags(Qt::WindowCloseButtonHint);
	initControler();
	initMenu();
	initList("../JawListLib");
	//connect(this, SIGNAL(openItem(QString)), this, SLOT(updateItem(QString)));
}

JawListWidget::~JawListWidget()
{
	if (ui.listWidget)
	{
		ui.listWidget->clear();
	}
}

void JawListWidget::initControler()
{
	ui.listWidget->setViewMode(QListView::ListMode);
	ui.listWidget->setIconSize(QSize(DEF_JAW_ITEM_ICON_WIDTH, DEF_JAW_ITEM_ICON_HIGH));
	ui.listWidget->setResizeMode(QListWidget::Adjust);
	ui.listWidget->setMovement(QListWidget::Static);

	ui.listWidget->setStyleSheet("QListWidget::Item:hover{background-color:rgba(47,46,46,0);border-radius:5px; }"
		"QListWidget::item:selected{background-color:rgba(47,46,46,0);color:rgb(61,61,61);border:2px solid #FFC53D;border-radius:5px; }"
		"QScrollBar:vertical{width:6px}");

	ui.listWidget->setFocusPolicy(Qt::NoFocus);
	ui.listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

	connect(ui.listWidget, &QListWidget::itemDoubleClicked, this, &JawListWidget::jawDoubleClicked);
	connect(ui.listWidget, &QListWidget::itemClicked, this, &JawListWidget::jawItemClicked);
}

void JawListWidget::initMenu()
{
	QAction* openMenu = new QAction(tr("打开"), ui.listWidget);
	QAction* deleteMenu = new QAction(tr("删除"), ui.listWidget);

	ui.listWidget->addAction(openMenu);

	QAction* Separator = new QAction(ui.listWidget);
	Separator->setSeparator(true);
	ui.listWidget->addAction(Separator);


	ui.listWidget->addAction(deleteMenu);

	connect(openMenu, SIGNAL(triggered(bool)), this, SLOT(on_action_openMenu_triggered()));
	connect(deleteMenu, SIGNAL(triggered(bool)), this, SLOT(on_action_DeleteMenu_triggered()));

	ui.listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
}

bool JawListWidget::initList(QString strpath)
{
	QDir rootDir(strpath);
	QString name = "*.h";
	QStringList filters;
	filters << name;
	QFileInfoList list = rootDir.entryInfoList(filters);
	for (unsigned int i = 0; i < list.count(); i++)
	{
		Info  info;
		info.fileInfo = list.at(i);
		if (info.fileInfo.isDir())
		{
			//在显⽰的⽬录前加图⽚
			//QIcon icon("dir.png"); //
			//	QString fileName = tmpFileInfo.fileName();
			//    QListWidgetItem* tmp = new QListWidgetItem(fileName);
			//添加图⽚
			//	//            QListWidgetItem *tmp = new QListWidgetItem(icon, fileName); //
			//	ui->listWidget->addItem(tmp);
		}
		else if(info.fileInfo.isFile())
		{
			//QIcon icon("../history/jinmao_1.jpg");
		/*	QString fileName = tmpFileInfo.fileName();
			QListWidgetItem* tmp = new QListWidgetItem(fileName);
			ui->listWidget->addItem(tmp);*/
		}
		addItem(info);
	}
	ui.label_jawcount->setText(QString::number(ui.listWidget->count()));
	return true;
}

void JawListWidget::addItem(Info& info)
{
	QString fileName = info.fileInfo.fileName();
	QListWidgetItem* tmp = new QListWidgetItem(QIcon(":/item_uncheck.png"), fileName);
	tmp->setSizeHint(QSize(DEF_JAW_LIST_ITEM_WIDTH, DEF_JAW_LIST_ITEM_HIGH));
	tmp->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);//设置文本对齐方式
	ui.listWidget->addItem(tmp); 
}

void JawListWidget::insertItem(int index, Info& info)
{
	int icount = ui.listWidget->count();
	if (icount != 0 && index >= icount)
	{
		qDebug() << "JawListWidget::insertItem  index is   illegal";
		return;
	}
	
	QListWidgetItem* listItem = new QListWidgetItem(QIcon(":/item_uncheck.png"), info.fileInfo.fileName());
	listItem->setSizeHint(QSize(DEF_JAW_LIST_ITEM_WIDTH, DEF_JAW_LIST_ITEM_HIGH));
	listItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);//设置文本对齐方式
	ui.listWidget->insertItem(index, listItem);
	ui.label_jawcount->setText(QString::number(ui.listWidget->count()));
}

void JawListWidget::removeItem()
{
	QMessageBox::StandardButton ret = QMessageBox::question(
		this, tr("提示"), tr("是否要删除当前所选文件?\n"),
		QMessageBox::Yes | QMessageBox::No,
		QMessageBox::No);

	if (ret == QMessageBox::No)
	{
		qDebug() << "give up  delete file";
		return;
	}
	int iindex = ui.listWidget->currentRow();
	if (iindex >= 0)
	{
		QListWidgetItem* itemdele = ui.listWidget->takeItem(iindex);
		delete itemdele;
	}
	ui.label_jawcount->setText(QString::number(ui.listWidget->count()));
}

bool JawListWidget::isHasSelect()
{
	QList<QListWidgetItem*> list;
	list = ui.listWidget->selectedItems();
	if (list.count() > 0)
	{
		return true;
	}
	return false;
}

void JawListWidget::jawDoubleClicked(QListWidgetItem* item)
{
	qDebug() << "jawDoubleClicked:" << item->text();
	//removeItem();
	//int iindex = ui.listWidget->currentRow();
	//QListWidgetItem* itemdele = new QListWidgetItem(QIcon(":/item_uncheck.png"), "12324");
	//ui.listWidget->insertItem(iindex+3, itemdele);

	int iindex = ui.listWidget->currentRow();
	QListWidgetItem* itemdele = ui.listWidget->item(iindex);
	itemdele->setIcon(QIcon(":/item_check.png"));


	/*int iindex = ui.listWidget->currentRow();
	QListWidgetItem* itemdele = ui.listWidget->item(iindex);
	emit openItem(itemdele->text());*/
}

void JawListWidget::jawItemClicked(QListWidgetItem* item)
{
	qDebug() << "jawItemClicked" << item->text();

}

void JawListWidget::updateItem(const QVariant varValue)
{
	if (varValue.canConvert<Info>())
	{
		Info info = varValue.value<Info>();
		QString filename = info.fileInfo.fileName();
		QList<QListWidgetItem*> list = ui.listWidget->findItems(filename, Qt::MatchExactly);
		if (list.count() > 0)
		{
			list[0]->setIcon(QIcon(":/item_check.png"));
			qDebug() << "update item" << filename;
		}
		qDebug() << " no found the update item";
	}
	qDebug() << "Convert Info fail";
}

void JawListWidget::updateItem(QString str)
{
	if (str.isEmpty())
	{
		qDebug() << " the update str is empty";
		return;
	}

	QList<QListWidgetItem*> list = ui.listWidget->findItems(str, Qt::MatchExactly);
	if (list.count() > 0)
	{
		list[0]->setIcon(QIcon(":/item_check.png"));
		qDebug() << "update item" << str;
	}
	qDebug() << " no found the update item";
}

void JawListWidget::on_action_openMenu_triggered()
{
	int iindex = ui.listWidget->currentRow();
	QListWidgetItem* item = ui.listWidget->item(iindex);
	emit openItem(item->text());
}

void JawListWidget::on_action_DeleteMenu_triggered()
{
	if (isHasSelect())
	{
		removeItem();
		return;
	}
	QMessageBox::warning(this, tr("提示"), tr("当前未选中任何文件，请选择要操作的文件后重试！"));
}


