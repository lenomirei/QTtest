#ifndef LABELANDSLIDER_H
#define LABELANDSLIDER_H

#include <QtWidgets/QMainWindow>
#include "ui_labelandslider.h"

class labelandslider : public QMainWindow
{
	Q_OBJECT

public:
	labelandslider(QWidget *parent = 0);
	~labelandslider();
private slots:
	void setlabel();
private:
	Ui::labelandsliderClass ui;
};

#endif // LABELANDSLIDER_H
