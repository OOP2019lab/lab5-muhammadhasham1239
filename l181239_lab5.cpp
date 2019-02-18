#include <iostream>
#include <string>
using namespace std;
#include "Header.h"



int main(){
	bankaccount myAccount("John Doe",549002);
		myAccount.printinfo();
		myAccount.deposit(250000);
		cout<<endl;
		myAccount.deposit(50000);
		myAccount.printinfo();
		myAccount.withdraw(2000);
		myAccount.printinfo();
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.withdraw(2000);
		myAccount.increase();
		myAccount.withdraw(2000);
		myAccount.printinfo();
		myAccount.withdraw(2000);
		myAccount.printinfo();
		system("pause");

}