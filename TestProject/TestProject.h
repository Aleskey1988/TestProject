#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TestProject.h"

class TestProject : public QMainWindow
{
	Q_OBJECT

public:
	TestProject(QWidget *parent = Q_NULLPTR);

private:
	Ui::TestProjectClass ui;
};
