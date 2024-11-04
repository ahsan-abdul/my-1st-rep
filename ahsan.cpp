
#include <iostream>
using namespace std;

int main()
{
      // task 1
	float n=0;
	cout << "press any key to continue" << endl;
	cin >> n;
	cout <<"variable value = " << n << endl;


		// task 2

	float no = 0;
	cout << "press any key to continue" << endl;
	cin >> no;
	cout << " enter variable value  " << no << endl;
	cout << "variable value entered = " << no << endl;

		// task 3

	float No1 = 0;
	float No2 = 0;
    cout << " enter value of first  variable = " << endl;
	cin >> No1;
	cout << " enter value of second variable = " << endl;
	cin >> No2;
	cout << "sum of values = " << (No1 + No2) << endl;
	cout << "difference of values = " << (No2 - No1) << endl; 
	cout << "product of values = " << (No1 * No2) << endl; 
	cout << "division of values = " << (No1 / No2) << endl;

		// task 4

	int No3 = 0;
	int No4 = 0;
	int No5 = 0;
	cout << "enter the amount  of fuel = " << endl;
	cin >> No3;
	cout << "enter the amount of rent = " << endl;
	cin >> No4;
	cout << "enter the amount of bills = " << endl;
	cin >> No5;
	cout << "----------------------------------------" << endl;
	
	cout << "fuel\t\t\t" << No3 << endl;
	    
	cout << "rent\t\t\t" << No4 << endl;

	cout << "bills\t\t\t" << No5 << endl;

	cout << "total\t\t\t" << (No3 + No4 + No5) << endl;
	cout << "----------------------------------------" << endl;



		//task 5


	int NO1 = 0;
	int NO2 = 0;
	int NO3 = 0;
	cout << "enter value of chemistry : " << endl;
	cin >> NO1;
	cout << "enter value of physics : " << endl;
	cin >> NO2;
	cout << " enter value of mathematics : " << endl;
	cin >> NO3;
	cout << "-------------------------------------------------" << endl;
	cout << "maths\t\tchemistry\tphysics\ttotal" << endl;
	cout << NO3 << "\t\t" << NO1 << "\t" << NO2 << "\t" << (NO1 + NO2 + NO3) << endl;
	cout << "-------------------------------------------------" << endl;

		//task 6


	int nm1 = 0;
	int nm2 = 0;
	int nm3 = 0;
	int nm4 = 0;
	int nm5 = 0;
	int nm6 = 0;
	cout << "enter the price of wheat:" << endl;
	cin >> nm1;
	cout << "enter the quantity of wheat:" << endl;
	cin >> nm2;
	cout << "enter the price of rice:" << endl;
	cin >> nm3;
	cout << "enter the quantity of rice:" << endl;
	cin >> nm4;
	cout << "enter the price of suagr :" << endl;
	cin >> nm5;
    cout << "enter the quantity of sugar :" << endl;
	cin >> nm6;
	cout << "-------------------------------" << endl;
	cout << "value of wheat : " << nm1 * nm2 << endl;
	cout << "value of rice : " << nm3 * nm4 << endl;
	cout << "value of sugar : " << nm5 * nm6 << endl;
	cout << "-------------------------------" << endl;
	return 0;

	//task 7

	float n1=0;
	float n2=0;
	float n3=0;
	cout << "enter any three numbers :" << endl;
	cout << "enter first number : " << endl;
	cin >> n1;
	cout << "enter second number : " << endl;
	cin >> n2;
	cout << "enter third number : " << endl;
	cin >> n3;
	cout << "reverse of these number : ";
	cout << n3;
	cout << n2;
	cout << n1 << endl;

	//task 8

	float no1 = 0;
	float no2 = 0;
	cout << "enter hours : " << endl;
	cin >> no1;
	cout << "enter minutes : " << endl;
	cin >> no2;
	cout << "total minutes : " << (no1 * 60)+no2 << endl;

	//task 9

	int num1 = 0;
	cout << "enter minutes: " << endl;
	cin >> num1;
	cout << num1/60 <<"hours"<<num1/60-num1<<"minutes" << endl;

	//task 10

	int nmb1 = 25;
	int nmb2 = 13;
	cout << "value of x is 25 and value of y is 13" << endl;
	cout << "sum of x+y:" << nmb1 + nmb2 << endl;
	cout << "diferrence of x-y:" << nmb1 - nmb2 << endl;
	cout << "mutiplication pf x*y :" << nmb1 * nmb2 << endl;
	cout << "division of x/y : " << nmb1 / nmb2 << endl;
	cout << "division of y/x : " << nmb2 / nmb1 << endl;

	

	//task 12

	int x2 = 0, y2 = 0;
	cout << "Please enter value of x: ";
	cin >> x2;
	cout << "Please enter value of y: ";
	cin >> y2;
	cout << "Value of x is " << x2 << " and Value of y is " << y2 << endl;
	cout << "Sum of x+y is " << x2 + y2 << endl;
	cout << "Difference of x-y is " << x2 - y2 << endl;
	cout << "Multiplication of x*y is " << x2 * y2 << endl;
	cout << "Divison of x/y is " << x2 / y2 << endl;
	cout << "Divison of y/x is " << y2 / x2 << endl;

	//task 13

	int l1 = 15, w1 = 21;
	cout << "Length of the rectangle is: " << l1 << endl;
	cout << "Width of the rectangle is: " << w1 << endl;
	cout << "Perimeter of the Rectangle is: " << 2 * (l1 + w1) << endl;
	cout << "Area of the Rectange is: " << l1 * w1 << endl;


	// task 14

	int l2 = 0, w2 = 0;
	cout << "Please enter length of the rectangle: ";
	cin >> l2;
	cout << "Please enter width of the rectangle: ";
	cin >> w2;
	cout << "...................................................." << endl;
	cout << "Length of the rectangle is: " << l2 << endl;
	cout << "Width of the rectangle is: " << w2 << endl;
	cout << "Perimeter of the Rectangle is: " << 2 * (l2 + w2) << endl;
	cout << "Area of the Rectange is: " << l2 * w2 << endl;


	//task 15
	int speed = 20, time = 10, distance = speed * time;
	cout << "the distance is: " << distance << endl;

	//task 16

	float gas = 12, travel = 350;
	cout << "Miles per Gallon= " << travel / gas << endl;

		
	return 0;
}