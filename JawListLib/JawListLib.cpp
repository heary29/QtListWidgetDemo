#include "JawListLib.h"
#include "JawListWidget.h"
#include <QSignalMapper>

JawListLib::JawListLib(QWidget* parent)
	: QWidget(parent)
{
	m_jawListWidget_ = new JawListWidget(this);
	connect(m_jawListWidget_, SIGNAL(openItem(QString)), this, SLOT(openJawItemSlot(QString)));
}

JawListLib::~JawListLib()
{
	if (m_jawListWidget_)
	{
		delete m_jawListWidget_;
		m_jawListWidget_ = nullptr;
	}
}

JawListWidget* JawListLib::getListWidget()
{
	return m_jawListWidget_;
}

void JawListLib::showList()
{
	show();
	if (m_jawListWidget_)
		m_jawListWidget_->show();
}

void JawListLib::hideList()
{
	hide();
}

void JawListLib::updateItem(QString str)
{
	if (m_jawListWidget_)
		m_jawListWidget_->updateItem(str);
}

void JawListLib::openJawItemSlot(QString str)
{
	emit openJawItem(str);
}