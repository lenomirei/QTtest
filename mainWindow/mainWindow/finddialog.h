#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QtWidgets/QDialog>
#include "ui_finddialog.h"

class FindDialog : public QDialog
{
	Q_OBJECT

public:
	FindDialog(QWidget *parent = 0);
	~FindDialog();
signals:
	void findNext(const QString &str,Qt::CaseSensitivity cs);
	void findPrevious(const QString &str, Qt::CaseSensitivity cs);
	private slots:
	void findClicked();
	void enableFindButton(const QString &text);
private:
	Ui::FindDialogClass ui;
};

#endif // FINDDIALOG_H
