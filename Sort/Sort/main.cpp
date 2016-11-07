#include "sort.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Sort w;
	w.setColumnRange('C', 'F');
	w.show();
	return a.exec();
}
