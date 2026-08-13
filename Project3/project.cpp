#include<iostream>
#include<string>
using namespace std;
class BankAccount {
private:
	int  account_number;
	double balance;
	string account_holder_name;
public:
	BankAccount(int num ,double bal,string name) {
		 account_number= num;
		 balance =bal;
		 account_holder_name = name;
	}
	void Deposit(double deposit_amount){
		balance += deposit_amount;
	}
	void Withdraw(double withdrawal_amount){
		if (withdrawal_amount <= balance) {
			balance -= withdrawal_amount;
		}
		else {
			cout << "You don’t have enough money";
		}
	}
	void print() {
		cout << " Account number : "<< account_number <<"\n";
		cout << " Balance : "<< balance <<"\n";
		cout << " Account holder name : "<<account_holder_name<<"\n";
	}
};
int main() {
	BankAccount ob1(8672871, 15200.67389,"tota");
	ob1.Deposit(2000.789);
	cout << "------------Deposit----------"<<"\n";
	ob1.print();
	ob1.Withdraw(8000);
	cout << "----------Withdraw------------"<<"\n";
	ob1.print();
}