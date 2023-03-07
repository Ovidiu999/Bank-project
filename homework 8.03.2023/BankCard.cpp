#include "BankCard.h"
#include <iostream>
#include <string.h>
using namespace std;

#pragma region Name get/set
string BankCard::getName()
{
	return name;
}
void BankCard::setName(string Name)
{
	name = Name;
}
#pragma endregion

#pragma region Surname get/set
string BankCard::getSurname()
{
	return surname;
}
void BankCard::setSurname(string Surname)
{
	surname = Surname;
}
#pragma endregion

#pragma region Bank_name get/set
string BankCard::getBank_name()
{
	return bank_name;
}
void BankCard::setBank_name(string Bank_name)
{
	bank_name = Bank_name;
}
#pragma endregion

#pragma region Card_number get/set
int BankCard::getCard_number()
{
	return card_number;
}
void BankCard::setCard_number(int Card_number)
{
	card_number = Card_number;
}
#pragma endregion

/*
#pragma region Expiration_date get/set
tm* BankCard::getExpiration_date()
{
	return expiration_date;
}
void BankCard::setExpiration_date(tm* Expiration_date)
{
	expiration_date = Expiration_date;
}
#pragma endregion
*/

#pragma region Expiration_date get/set
string BankCard::getExpiration_date()
{
	return expiration_date;
}
void BankCard::setExpiration_date(string Expiration_date)
{
	expiration_date = Expiration_date;
}
#pragma endregion

#pragma region Security_code get/set
int BankCard::getSecurity_code()
{
	return security_code;
}
void BankCard::setSecurity_code(int Security_code)
{
	security_code = Security_code;
}
#pragma endregion

#pragma region balance get/set
int BankCard::getBalance()
{
	return balance;
}
void BankCard::setBalance(int Balance)
{
	balance = Balance;
}
#pragma endregion


