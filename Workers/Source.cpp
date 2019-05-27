#include"Director.h"
#include"employee.h"
#include"human_.h"
#include"Manager.h"
#include"Worker.h"
#include"org-tion.h"
using namespace std;

void main() {
	Organization o("Itstep", 1000);
	o.addEmployee(new director("Petya", 25, 3, 5));
	o.addEmployee(new manager("Vasya", 23, 3, 3));
	o.addEmployee(new Worker("Aruzhan", 35, 10));
	o.addEmployee(new Worker("qwerty", 20,3));
	o.info();
	system("pause");
}
