#include <iostream>
using namespace std;
#include <string>
#include "Header.h"



bankaccount::bankaccount(string b,int n){//constructor as demanded
	name=b;
	accountnumber=n;
	balance=0;
	balancelimit=200000;
	size=10;
	transactions=new int[size];
	for(int i=0;i<size;i++){
	transactions[i]=0;
	}
	trans=0;
}

string bankaccount::getname(){//getter fuction of name 
	return name;
}

int bankaccount::getacc(){//getter fuction of account number
	return accountnumber;
}

float bankaccount::getbalance(){//getter fuction of balance
return balance;
}

float bankaccount::getbalancelimit(){//getter fuction of balancelimit
return balancelimit;
}

int bankaccount::getsize(){//getter fuction of size of transaction
return size;
}

int bankaccount::gettrans(){//getter fuction of number of transaction
return trans;
}



void bankaccount::printinfo(){//displaying information of account
	cout<<"Name of account holder is "<<name<<endl;
	cout<<"Account numeber is "<<accountnumber<<endl;
	cout<<"Balance in account holder is "<<balance<<endl;
	cout<<"Total number of transactions are "<<trans<<endl;
	cout<<"Transactions are "<<endl;
	for(int i=0;i<size;i++){	
	cout<<transactions[i];
	cout<<" "; 
	}
	cout<<endl<<endl;
}

void bankaccount::withdraw(int n){//for withdrawing
	if(n>balance){
	cout<<" Transaction Unsuccessful: Insufficient balance "<<endl;
	}
	else{
	transactions[trans]=-n;
	balance=balance-n;
	trans++;
	cout<<"Transaction Successful "<<endl;
	}
}

void bankaccount::deposit(int n){//for deposit
	if(balance + n <=balancelimit){
balance =balance+n;
transactions[trans]=n;
trans++;
cout<<"Transaction Successful"<<endl;
	}else{
	cout<<"Limit reached "<<endl;
	}
}

bankaccount::~bankaccount(){//destructor function as demanded
	delete[]transactions;
	name="";
	accountnumber=-1;
	balance=-1;
	balancelimit=-1;
	size=-1;
	trans=-1;
}

void bankaccount::increase(){
	int *x=new int[2* size];
	for(int i=0;i<2*size;i++){
	x[i]=0;
	}
	for(int i=0;i<size;i++){
	x[i]=transactions[i];
	}
	delete[]transactions;
	transactions=x;
	size=2*size;
}