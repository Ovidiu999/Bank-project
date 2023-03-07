#pragma once
#include<iostream>
#include<string>
#include<time.h>
using namespace std;

class BankCard
{
private:
	string name;
	string surname;
	string bank_name;
	int card_number;
	string expiration_date;
	int security_code;
	int balance=0;
public:

	string getName();
	void setName(string Name);

	string getSurname();
	void setSurname(string Surname);
	
	string getBank_name();
	void setBank_name(string Bank_name);

	int getCard_number();
	void setCard_number(int Card_number);

	/*
	tm* getExpiration_date();
	void setExpiration_date(tm* Expiration_date);
	*/
	string getExpiration_date();
	void setExpiration_date(string Expiration_date);

	int getSecurity_code();
	void setSecurity_code(int Security_code);
	
	int getBalance();
	void setBalance(int Balance);
};

