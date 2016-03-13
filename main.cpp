#include<iostream>
using namespace std;

struct Person
	{
	char first_name[15];
	char last_name[15];		
    };

struct Client
{
	Person name[30];
	int bank_account;
	int amount;
};

	
int main()
	{
		
		Client client[30];
		int n;
		cout << "People: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "First name:  ";
			cin >> client[i].name[i].first_name;
			cout << "Last name: ";
			cin >> client[i].name[i].last_name;	
			cout << "Money: ";
			cin >> client[i].amount;
		}
		cout << endl;
		cout << endl;

		for (int i = 0; i < n; i++)
		{
			cout << "First name: " << client[i].name[i].first_name;
			cout << "Last name: " << client[i].name[i].last_name;
			cout << "Money: " << client[i].amount;
			cout << endl;
		}
		cout << endl;
		cout << endl;

		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += client[i].amount;
		}
		cout << "Sum= " << sum << endl;
		cout << endl;


		system("pause");
		return 0;
	}