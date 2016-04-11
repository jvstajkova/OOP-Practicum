#include<iostream>
#include<cstring>
using namespace std;

class Ticket
{
private:
	int place;
	double price;
public:
	Ticket()
	{

	}
	Ticket(int _place)
	{
		place = _place;

		if (place >= 1 && place <= 30)
		{
			price = 70;
		}
		if (place >= 31 && place <= 70)
		{
			price = 55;		
		}
		if (place >= 71 && place <= 100)
		{
			price = 30;
		}
		if (place >= 101 && place <= 150)
		{
			price = 15;
		}
	}
	void input()
	{
		cout << "Place: ";
		cin >> place;
		cout << "Price: ";
		cin >> price;
	}
	int  getPlace()
	{
		return place;
	}
	double getPrice()
	{
		return price;
	}
	void setPlace(int _place)
	{
		place = _place;
	}
	void setPrice(double _price)
	{
		price = _price;
	}
	void printTicket()
	{
		cout << "Place: " << place << endl;
		cout << "Ticket's price: " << price << endl;
	}
};

class Guest
{
private: 
	char name[30];
	Ticket ticket;
public:
	Guest()
	{

	}
	Guest(char* _name, Ticket _ticket)
	{
		strcpy_s(name, _name);
		ticket.setPlace( _ticket.getPlace());
	}
	void inputGuest()
	{
		cout << "Name: ";
		cin >> name;
		ticket.input();
	}
	void getsPresent()
	{
		if ((ticket.getPlace()>= 1) && (ticket.getPlace()<=30))
		{
			cout << "Gets a present." << endl;
		}
		else cout << "No present for you." << endl;
	}
	void printGuest()
	{
		cout << "Peson's name: " << name << endl;
		ticket.printTicket();
	}
};

int main()
{
	
	Guest guests[5];
	for (int i = 0; i < 5; i++)
	{
		guests[i].inputGuest();
	}
	for (int i = 0; i < 5; i++)
	{
		guests[i].printGuest();
		cout << "The winners are: ";
		guests[i].getsPresent();
	}

	system("pause");
	return 0;
}