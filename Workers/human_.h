#pragma once
#include <iostream>
#include <string>
using namespace std;
class human_
{
	string name;
	int age;
public:
	human_(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void setName(string name) { this->name = name; }
	string getName()const { return name; }
	void setName(int age) { this->age = age; }
	int getAge()const { return age; }
	virtual void info()const {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};

