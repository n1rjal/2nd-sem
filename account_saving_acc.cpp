#include <iostream>
using namespace std;

class Account{
	public:
		double balance;
		Account();
		~Account();	
		
		void withDraw(double);
		void deposit(double);
};

Account::Account(){
	cout << "An account was created"<<endl;
}

Account::~Account(){
	cout << "An account was closed"<<endl;
}

void Account::deposit(double money=0.0){
	this->balance = this->balance + money;
	cout << money<< " was withdrawn"<<endl;
	cout << "New Balance "<<this->balance<<endl;
}

void Account::withDraw(double money=0.0){
	this->balance = this->balance - money;
	cout << money<< " was withdrawn"<<endl;
	cout << "New Balance "<<this->balance<<endl;
}

class SavingAcc: public Account{
	public:
		SavingAcc();
};

SavingAcc::SavingAcc(){
	this->balance= 5000.00;
	cout << "A saving acc was created"<<endl;
}


int main(){
	SavingAcc s1;
	cout <<s1.balance<<endl;
	cout << "======LETS DEPOSIT======="<<endl;
	s1.deposit(500.00);
	cout << "======LETS Withdraw======="<<endl;
	s1.withDraw(250.00);
}
