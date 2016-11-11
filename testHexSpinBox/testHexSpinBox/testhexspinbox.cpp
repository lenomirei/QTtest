#include "testhexspinbox.h"
#include "hexspinbox.h"
testHexSpinBox::testHexSpinBox(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	HexSpinBox *hsp = new HexSpinBox(this);

}

testHexSpinBox::~testHexSpinBox()
{

}
