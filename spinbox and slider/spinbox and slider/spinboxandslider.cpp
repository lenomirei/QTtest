#include "spinboxandslider.h"

spinboxandslider::spinboxandslider(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.spinBox->setRange(0, 100);
	ui.horizontalSlider->setRange(0, 100);
	
	connect(ui.spinBox, SIGNAL(valueChanged(int)), ui.horizontalSlider, SLOT(setValue(int)));
	connect(ui.horizontalSlider, SIGNAL(valueChanged(int)), ui.spinBox, SLOT(setValue(int)));
	ui.spinBox->setValue(35);
}

spinboxandslider::~spinboxandslider()
{

}
