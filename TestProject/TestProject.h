#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestProject.h"

class TestProject : public QMainWindow
{
	Q_OBJECT

public:
	TestProject();

private:
	Ui::TestProjectClass ui;
	int value = 5;
};
