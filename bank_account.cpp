#include <iostream>
#include <vector>
#include <string>

class BankAccount
{
private:
	std::string m_account_holder{};
	double m_balance{};
	const int m_account_number{};

public:
	//Contructor for the Bank Account
	BankAccount(std::string account_holder, double balance, int account_number) 
		: m_account_holder{ account_holder }, m_balance{ balance }, m_account_number{ account_number }
	{ }

	//Method to get the account number
	int get_account_number() const
	{
		return m_account_number;
	}

	double get_balance() const
	{
		return m_balance;
	}

	//Method to deposit an amount
	double deposit(double amount)
	{
		if (amount > 0)
		{
			m_balance += amount;
			std::cout << "Deposit successful. New balance: " << m_balance << '\n';
			return m_balance;
		}
		else
		{
			std::cout << "Invalid deposit.\n";
		}
	}

	//Method to withdraw an amount
	double withdraw(double amount)
	{
		if (amount > 0 && m_balance >= amount)
		{
			m_balance -= amount;
			std::cout << "Withdrawal of " << amount << " is successful. New balance: " << m_balance;
			return  m_balance;
		}
		else
		{
			std::cout << "Insufficient balance. Try again.\n";
		}
	}

	//Method to display account info
	void display() const
	{
		std::cout << "Name: " << m_account_holder << '\n';
		std::cout << "Balance: " << m_balance << '\n';
		std::cout << "Account Number: " << m_account_number << '\n';
	}
};

int main()
{
	std::vector<BankAccount> accounts{};
	int option{};
	do
	{
		std::cout << "\n--- Bank Menu ---\n";
		std::cout << "1. Create Account\n";
		std::cout << "2. Deposit\n";
		std::cout << "3. Withdraw\n";
		std::cout << "4. Check Balance\n";
		std::cout << "5. Show Account Info\n";
		std::cout << "6. Exit\n";

		std::cout << "Enter an option (1-6):  ";
		std::cin >> option;

		if (option == 1) //Create an account
		{
			std::string name{};
			double balance{};
			int account_number{};

			std::cout << "Enter the name: ";
			std::cin.ignore();
			getline(std::cin >> std::ws, name);

			std::cout << "Enter the starting balance: ";
			std::cin >> balance;

			std::cout << "Enter the account number: ";
			std::cin >> account_number;
			std::cout << "Account created successfully.\n";

			accounts.emplace_back(name, balance, account_number);
		}

		else if (option >= 2 && option <= 5) //Actions 2 to 5
		{
			if (accounts.empty()) //If account is empty
			{
				std::cout << "No account created.\n";
				continue;
			}

			//User prompt for an account number
			int account_number{};
			std::cout << "Enter account number: ";
			std::cin >> account_number;

			bool found = false;
			for (auto& account : accounts) //Loop through the list of available accounts
			{
				if (account.get_account_number() == account_number) //If account is found (by the account number)
				{
					found = true;

					if (option == 2) //Deposit amount
					{
						double amount{};
						std::cout << "Enter the amount to deposit: ";
						std::cin >> amount;
						account.deposit(amount);
						std::cout << '\n';
					}
					else if (option == 3) //Withdraw amount
					{
						double amount{};
						std::cout << "Enter the amount you want to withdraw: ";
						std::cin >> amount;
						account.withdraw(amount);
						std::cout << '\n';
					}
					else if (option == 4) //Check balance
					{
						std::cout << "Balance: " << account.get_balance() << '\n';
					}
					else if (option == 5) //Show Account Info
					{
						account.display();
						std::cout << '\n';
					}
					break;
				}
			}
			if (!found)
			{
				std::cout << "Account not found.\n";
			}
		}

		else if (option == 6)
		{
			std::cout << "Exiting...\n";
		}
		else
		{
			std::cout << "Enter a valid option (1-6)\n";
		}

	} while (option != 6);

	return 0;
}
