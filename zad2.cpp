#include<iostream>
#include<cstring>
using namespace std;

class Pizza
{
private:
	char pizzaName[30];
	double price;
public: 
	Pizza()
	{

	}
	Pizza(char* _pizzaName, double _price)
	{
		strcpy_s(pizzaName, _pizzaName);
		price = _price;
	}
	double getPrice()
	{
		return price;
	}
	void setPrice(double _price)
	{
		price = _price;
	}
	void printPizza()
	{
		cout << "Pizza's name: " << pizzaName << endl;
		cout << "Pizza's price: " << price << endl;
	}
	
};

class Order
{
private:
	Pizza pizza[10];
	int length;
public: 
	Order()
	{

	}
	void addPizza(Pizza& _pizza)
	{
		pizza[length] =_pizza;
		length++;
	}
	double  priceOfTheOrder()
	{
		double sum = 0;
		for (int i = 0; i < length; i++)
		{
			sum = pizza[i].getPrice();
		}
		return sum;
	}
	void printOrder()
	{
		for (int i = 0; i < length; i++)
		{
			pizza[i].printPizza();
		}
	}
};

class Client
{
private: 
	char clientsName[30];
	Order orders[10];
	int lengthOfOrder;
public:
	Client()
	{

	}
	Client(char* _clientsName)
	{
		strcpy_s(clientsName, _clientsName);	
	}
	void addOrder(Order& order)
	{
		orders[lengthOfOrder] = order;
		lengthOfOrder++;
	}
	double  priceOfOrder()
	{
		double sum = 0;
		for (int i = 0; i < lengthOfOrder; i++)
		{
			sum = orders[i].priceOfTheOrder();
		}
		return sum;
	}
	void printInfo()
	{
		cout << "Client's name: " << clientsName << endl;
		for (int i = 0; i < lengthOfOrder; i++)
		{
			orders[i].printOrder();
		}
	}
};

int main()
{
	Pizza pizza1{"Margarita", 4, 60 };
	Pizza pizza2{"Sancho Pansa", 5.40 };
	Pizza pizza3{"Karibski pirati", 6.20 };
	Client client[3];
	Order order1;
	Order order2;
	order1.addPizza(pizza1);
	order1.addPizza(pizza3);
	order2.addPizza(pizza2);

	for (int i = 0; i < 3; i++)
	{
		client[i].addOrder(order1);
		client[i].addOrder(order2);
			client[i].printInfo();
	}

	system("pause");
	return 0;
}