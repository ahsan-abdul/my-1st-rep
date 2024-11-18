#include <iostream>
using namespace std;
int main()
{
	double x = 0;
	double  y = 0;
	cout << "enter the x cordinate : ";
	cin >> x;
	cout << "enter the y cordinate : ";
	cin >> y;
	if (x == 0 && y == 0)
	{
		cout << "the point lies on the senter " << endl;
	}
	if (x == 0)
	{
		cout << "the point lies on the y-axis" << endl;
	}
	if (y == 0)
	{
		cout << "the point lies on the x-axis" << endl;
	}
	if (x > 0 && y > 0)
	{
		cout << "the point lies in the first quadrant " << endl;
	}
	if (x < 0 && y>0)
	{
		cout << "the point lies in the second quadrant " << endl;
	}
	if (x < 0 && y < 0)
	{
		cout << " the point lies in the third quardant " << endl;
	}
	if (x > 0 && y < 0)
	{
		cout << " the point lies in the fourth quardant " << endl;
	}
	return 0;
}
