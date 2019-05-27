#pragma once
#include "employee.h"
class director :
	public employee
{
	int cntDmpt;
public:
	director(string name, int age, int exp, int cntDmpt) :employee(name, age, exp) {
		this->cntDmpt = cntDmpt;

	};
	void addcntCmpt(int cntDmpt) { this->cntDmpt = cntDmpt; }


	int getcntDmpt()const { return cntDmpt; }


	double getCoef()const override {
		double expCoef = (double)this->getExp()*0.1;
		double cntd = (double)cntDmpt / 2;

		return 1 + expCoef + cntd;
	}

	void info()const override {
		employee::info();
		cout << "contorls departments: " << this->cntDmpt << endl;
	}
};