#pragma once
#include "employee.h"
class manager :
	public employee
{
	int cntCmpt;
public:
	manager(string name, int age, int exp, int cntCmpt) :employee(name, age, exp) {
		this->cntCmpt = cntCmpt;
		
	};
	void addcntCmpt(int cntCmpt) { this->cntCmpt = cntCmpt; }
	

	int getcntCmpt()const { return cntCmpt; }
	

	double getCoef()const override {
		double expCoef = (double)this->getExp()*0.1;
		double cntd = (double)cntCmpt / 2;
		
		return 1 + expCoef + cntd;
	}

	void info()const override {
		employee::info();
		cout << "contorls compartments: " << this->cntCmpt << endl;
	}
};