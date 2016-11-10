#include "celldialog.h"

celldialog::celldialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.buttonOK->setEnabled(false);
	QRegExp re("[A-Za-z][1-9][0-9]{0,2}");
	ui.lineEdit->setValidator(new QRegExpValidator(re, this));
	//connect(ui.lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(on_lineEdit_textChanged()));
	connect(ui.buttonOK, SIGNAL(clicked()), this, SLOT(accept()));
	connect(ui.buttonCancel, SIGNAL(clicked()), this, SLOT(reject()));
}

celldialog::~celldialog()
{

}

void celldialog::on_lineEdit_textChanged()
{
	ui.buttonOK->setEnabled(ui.lineEdit->hasAcceptableInput());
}