#include<iostream>
#include<string>
using namespace std;
class Employee {
private:
	string name = "Unknown";
	int age = 18;
	double salary = 0;
public:
	void setName(string n) {
		if (!n.empty()&&n!=" ") name = n;
	}
	string getName() {
		return name;
	}
	void setAge(int a) {
		if (a >= 18 && a <= 60) age = a;
	}
	int getAge() {
		return age;
	}
	void setSalary(double s) {
		if (s > 0) salary = s;
	}
	double getSalary() {
		return salary;
	}
	Employee() {
		name = "Unknown";
		age = 18;
		salary = 0;
	}
	Employee(string n, int a, double s) {
		setName(n);
		setAge(a);
		setSalary(s);
	}
	void DisplayInfo() {
		cout << "Name of Employee : " << getName()<< "\n";
		cout << "Age to Employee : " << getAge() << "\n";
		cout << "Salary of Employee : " << (double)getSalary() << "\n";
	}
	void GiveRaise(double amount) {
		cout << "Salary before : " << salary << "\n";
		if (amount > 0) salary = salary + amount;
		cout << "Salary after : " << salary << "\n";
	}
};
int main() {
	Employee ob1;
	ob1.DisplayInfo();
	Employee ob2("Ebtehal", 18, 5000);
	ob2.DisplayInfo();
	Employee ob3(" ", 15, -1000);
	ob3.DisplayInfo();
	ob2.GiveRaise(3000);
}