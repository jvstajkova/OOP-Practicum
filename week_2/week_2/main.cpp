//функции 
/* #include<iostream>
#include<cmath>
using namespace std;
struct Point2D
{
	double x; 
	double y;

};
Point2D translate(Point2D p, double x, double y)
{
	Point2D result;
	result.x = x + p.x;
	result.y = y + p.y;
	return result;

}

double distancePoint(Point2D p1, Point2D p2);
void printPoint(Point2D p)
{
	cout << p.x << " " << p.y << endl;
}

int main()
{
	Point2D p;
	Point2D p1, p2;
	
	p.x = 5;
	p.y = 6;
	printPoint(p);
	Point2D result = translate(p, 2, 3);
		printPoint(result);
		p1.x = 0;
		p2.x = 5;
		p1.y = 1;
		p2.y = 1;
		cout << distancePoint(p1, p2) << endl;
		
	system("pause");
	return 0;
}

double distancePoint(Point2D p1, Point2D p2)
{
	double d;
	
	d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	return d;
}
*/

//метод на структурата
#include<iostream>
#include<cmath>
using namespace std;
struct Point2D
{
	double x;
	double y;
	void translate(double dx, double dy) // метод на структурата = функция, която е част от структурата
	{
		x = x + dx; // x+= dx
		y += dy;
	}
//	void print()
	//{
	//	cout << x << " " << y << endl;
	//}

	double dist(Point2D other)
	{
		double d;
		d = sqrt(pow((x - other.x), 2) + pow((y - other.y), 2));
		return d;
	}
};


int main()
{
	double d;
	Point2D p;
	Point2D q;
	q.x = 5;
	q.y = 3;
	p.x = 10;
	p.y = 13;
	cout << p.dist(q) << endl;
	p.translate(2, 3);//изпращаме съобщение да p да се измести с ...
	cout << p.x << " " << p.y << endl; //променят се 
	system("pause");
	return 0;
}

