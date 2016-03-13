#include<iostream>
#include<string.h>
using namespace std;

struct Destination
{
	char city[32];
	int kilometers;
};

int main()
{
	Destination destination1[2]={{ "Plovdiv", 165 }, { "Varna", 469 } };
	for (int i = 0; i<2; i++)
	{
		cout << destination1[i].city << " " << destination1[i].kilometers << endl;
	}
	cout << endl;

	Destination destination2[30];
	for (int i = 0; i<30; i++)
	{
		strcpy_s(destination2[i].city, "");
		destination2[i].kilometers = 0;
	}

	Destination destination3[5] = { { "Plovdiv", 165 }, { "Varna", 469 }, { "Burgas", 393 }, { "Vidin", 199 }, { "Dobrich", 512 } };
	for (int i = 0; i<5; i++)
	{
		cout << destination3[i].city << " " << destination3[i].kilometers << endl;
	}
	cout << endl;


	system("pause");
	return 0;
}