#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.label->setBuddy(ui.lineEdit);
	ui.findbutton->setDefault(true);
	ui.findbutton->setEnabled(false);
	connect(ui.lineEdit, SIGNAL(textChanged(const QString &)), SLOT(enableFindButton(const QString &)));
	connect(ui.findbutton, SIGNAL(clicked()), SLOT(findClicked()));
	connect(ui.closebutton, SIGNAL(clicked()), SLOT(close()));
}

FindDialog::~FindDialog()
{

}
void FindDialog::enableFindButton(const QString &text)
{
	ui.findbutton->setEnabled(!text.isEmpty());
}
void FindDialog::findClicked()
{
	QString text = ui.lineEdit->text();
	Qt::CaseSensitivity cs = ui.checkBox->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;
	if (ui.checkBox_2->isChecked())
	{
		emit findPrevious(text,cs);
	}
	else
	{
		emit findNext(text,cs);
	}
}
