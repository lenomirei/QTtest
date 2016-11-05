#include "labelandslider.h"

labelandslider::labelandslider(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.label->setText("35");
	ui.horizontalSlider->setValue(35);
	ui.horizontalSlider->setRange(0, 100);
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), SLOT(setlabel()));
}

labelandslider::~labelandslider()
{

}
void labelandslider::setlabel()
{
	QString value = QString::number(ui.horizontalSlider->value(), 10);
	ui.label->setText(value);
}
