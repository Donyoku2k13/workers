#pragma once
#include"employee.h"
class Worker :
	public employee
{
	int Exp;
public:
	Worker(string name, int age, int exp) :employee(name, age, exp) {
		this->Exp=exp;
	}

	double getCoef()const override {
		double expCoef = (double)this->getExp()*0.3;
		return 1 + expCoef;
	}
	void info()const override {
		employee::info();
		cout << "Experience: " << this->Exp << endl;
	}

};
