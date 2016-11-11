#ifndef TESTHEXSPINBOX_H
#define TESTHEXSPINBOX_H

#include <QtWidgets/QMainWindow>
#include "ui_testhexspinbox.h"

class testHexSpinBox : public QMainWindow
{
	Q_OBJECT

public:
	testHexSpinBox(QWidget *parent = 0);
	~testHexSpinBox();

private:
	Ui::testHexSpinBoxClass ui;
};

#endif // TESTHEXSPINBOX_H
