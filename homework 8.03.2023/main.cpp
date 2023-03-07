#include "BankCard.h"
#include <iostream>
#include <string.h>
using namespace std;

#pragma region Main CLASS 
class Main
{
public:
    static void main()
	{
		BankCard user1;
		BankCard* user2 = new BankCard();
#pragma region we read the values 
		user1.setName("Rosu");
		user1.setSurname("Ovidiu");
		user1.setBank_name("Banca Transilvania");
		user1.setCard_number(1234567891019876);
		/*
		tm* expiration = NULL;
		expiration->tm_mday = 9;
		expiration->tm_mon = 3;
		expiration->tm_year = 2024;
		*/
		user1.setExpiration_date("09/24");
		user1.setSecurity_code(344);

		user2->setName("Pojar");
		user2->setSurname("Fenesan-Gabor");
		user2->setBank_name("Libra Bank");
		user2->setCard_number(3214567891019876);
		/*
		expiration->tm_mday = 1;
		expiration->tm_mon = 2;
		expiration->tm_year = 2026;
		*/
		user2->setExpiration_date("04/25");
		user2->setSecurity_code(102);
#pragma endregion 


#pragma region what we show on display
		cout << user1.getName() << endl;
		cout << user1.getSurname() << endl;
		cout << user1.getBank_name() << endl;
		cout << user1.getCard_number() << endl;
		///tm* expirationOUT = user1.getExpiration_date();
		///cout << expirationOUT->tm_mday << " " << expirationOUT->tm_mon << " " << expirationOUT->tm_year<<endl;
		cout << user1.getExpiration_date() << endl;
		cout << user1.getSecurity_code() << endl;

		cout << endl;

		cout << user2->getName() << endl;
		cout << user2->getSurname() << endl;
		cout << user2->getBank_name() << endl;
		cout << user2->getCard_number() << endl;
		cout << user2->getExpiration_date() << endl;
		cout << user2->getSecurity_code() << endl;
#pragma endregion
	}

};

#pragma endregion

int main()
{
	Main::main();
	return 0;
}
