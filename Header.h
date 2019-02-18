#include <iostream>
using namespace std;

class bankaccount{
	//declaring basic variables
	string name;
	int accountnumber;
	float balance;
	float balancelimit;
	int *transactions;
	int size;
	int trans;
public:
	//declaring getters and functions
	bankaccount(string name,int n);
	void printinfo();
	string getname();
	int getacc();
	float getbalance();
	float getbalancelimit();
	int getsize();
	int gettrans();
	int *getpointer();
	void withdraw(int n);
	void deposit(int n);
	~bankaccount();
	void increase();
};