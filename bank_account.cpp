#include <iostream>

class BankAccount
{
private:
	std::string m_accountHolder{};
	double m_balance{};
	const int m_accountNumber{};

public:
	BankAccount(std::string accountHolder, const double balance, int accountNumber)
		: m_accountHolder{ accountHolder }, m_balance{ balance }, m_accountNumber{ accountNumber }
	{

	}

	void displayAccountInfo() const
	{
		std::cout << "Account Holder: " << m_accountHolder << '\n';
		std::cout << "Account Number: " << m_accountNumber << '\n';
		std::cout << "Account Balance: " << m_balance << '\n';
	}

	void deposit(double amountDeposited)
	{
		if (amountDeposited > 0)
		{
			m_balance += amountDeposited;
			std::cout << "Deposited: " << amountDeposited << '\n';
		}
		else
		{
			std::cout << "Invalid deposit amount." << '\n';
		}
	}
	void withdraw(double amountWithdrawn) 
	{
		if (m_balance >= amountWithdrawn)
		{
			m_balance -= amountWithdrawn;
			std::cout << "Withdrew: " << amountWithdrawn << '\n';
		}
		else
		{
			std::cout << "Insufficient funds." << '\n';
		}
	}

	double checkBalance() const
	{
		return m_balance;
	}


};

int main()
{
	BankAccount account1{ "Henry Marvel", 40000, 678459 };

	int option{};
	do
	{
		std::cout << "Menu: " << '\n';
		std::cout << "1. Deposit " << '\n';
		std::cout << "2. Withdraw " << '\n';
		std::cout << "3. Check Balance " << '\n';
		std::cout << "4. Show Account Info " << '\n';
		std::cout << "5. Exit " << '\n';

		std::cout << "Choose an action from option (1-5): ";
		std::cin >> option;
		switch (option)
		{
		case 1:
			{
				double amount{};
				std::cout << "Enter amount to deposit: ";
				std::cin >> amount;
				account1.deposit(amount);
				break;
			}
		case 2:
		{
			double amount{};
			std::cout << "Enter amount to withdraw: ";
			std::cin >> amount;
			account1.withdraw(amount);
			break;
		}
		case 3:
		{
			std::cout << "Balance: " << account1.checkBalance() << '\n';
			break;
		}
		case 4:
		{
			std::cout << "Account Information: " << '\n';
			account1.displayAccountInfo();
			break;
		}
		case 5:
			std::cout << "Exiting the program." << '\n';
			break;
		default:
			std::cout << "Invalid option. Please choose a valid action (1-5)." << '\n';
			break;
			
		}
	} while(option != 5);

	return 0;
}
