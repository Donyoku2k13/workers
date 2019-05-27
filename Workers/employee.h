#pragma once
#include "human_.h"
class employee abstract :
	public human_
{
	int exp;
public:
	employee(string name, int age, int exp) : human_(name, age) {
		this->exp = exp;
	}
	void setExp(int exp) {
		this->exp = exp;
	}
	int getExp()const { return exp; }
	virtual double getCoef()const = 0;
	void info()const override {
		human_::info();
		cout << "\nExperience: " << exp << " years" << endl;
	}
};

