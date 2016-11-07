#include "celldialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	celldialog w;
	w.show();
	return a.exec();
}
