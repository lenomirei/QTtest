#ifndef SORT_H
#define SORT_H

#include <QtWidgets/QDialog>
#include "ui_sort.h"

class Sort : public QDialog
{
	Q_OBJECT

public:
	Sort(QWidget *parent = 0);
	~Sort();
	void setColumnRange(QChar first,QChar last);
private:
	Ui::SortClass ui;
};

#endif // SORT_H
