#include "sort.h"

Sort::Sort(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.groupBox_2->hide();
	ui.groupBox_3->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);

	setColumnRange('A', 'Z');
}

Sort::~Sort()
{

}

void Sort::setColumnRange(QChar first, QChar last)
{
	ui.comboBox->clear();
	ui.comboBox_3->clear();
	ui.comboBox_5->clear();

	ui.comboBox_3->addItem(tr("None"));
	ui.comboBox_5->addItem(tr("None"));
	ui.comboBox->setMinimumSize(ui.comboBox_3->sizeHint());

	QChar ch = first;
	while (ch <= last)
	{
		ui.comboBox->addItem(QString(ch));
		ui.comboBox_3->addItem(QString(ch));
		ui.comboBox_5->addItem(QString(ch));
		ch = ch.unicode() + 1;
	}
}
