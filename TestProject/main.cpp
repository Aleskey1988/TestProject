#include "TestProject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestProject w;
	w.show();
	return a.exec();
}
