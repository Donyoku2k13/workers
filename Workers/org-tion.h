#pragma once
#include <vector>
#include"employee.h"
class Organization
{
	vector<employee*> emps;
	int salary;
	string name;
public:

	Organization(string name, int salary) {
		this->name = name;
		this->salary = salary;
	}
	void setName(string name) { this->name = name; }
	string getName()const { return name; }
	int getSalary()const { return salary; }
	void setSalary(int salary) { this->salary = salary; }

	void info()const {
		cout << "Organization " << name << "\nSalary: " << salary << " $";
		for (employee*e : emps)
		{
			cout << "\n-----------------\n";
			e->info();
			cout << "\nSalary: " << e->getCoef()*salary << " $";
		}
	}
	void addEmployee(employee*e) {
		emps.push_back(e);
	}
	void removeEmployee(int index) {}

	double getAllSalary() {
		double allCoef = 0;
		for (employee*e : emps)
		{
			allCoef += e->getCoef();
		}
		return allCoef * salary;
	}

	Organization(const Organization&) = delete;
	Organization& operator=(const Organization&) = delete;
	~Organization() {
		for (employee*e : emps) {
			delete e;
		}
	}
};