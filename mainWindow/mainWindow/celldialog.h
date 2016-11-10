#ifndef CELLDIALOG_H
#define CELLDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_celldialog.h"

class celldialog : public QDialog
{
	Q_OBJECT

public:
	celldialog(QWidget *parent = 0);
	~celldialog();
	Ui::celldialogClass getUi()
	{
		return ui;
	}
	private slots:
	void on_lineEdit_textChanged();
private:
	Ui::celldialogClass ui;
};

#endif // CELLDIALOG_H
