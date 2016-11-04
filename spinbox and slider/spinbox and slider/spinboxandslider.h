#ifndef SPINBOXANDSLIDER_H
#define SPINBOXANDSLIDER_H

#include <QtWidgets/QMainWindow>
#include "ui_spinboxandslider.h"

class spinboxandslider : public QMainWindow
{
	Q_OBJECT

public:
	spinboxandslider(QWidget *parent = 0);
	~spinboxandslider();

private:
	Ui::spinboxandsliderClass ui;
};

#endif // SPINBOXANDSLIDER_H
