#include <iostream>
using namespace std;

void highest(int num1, int num2);

int main()
{
	int num1, num2;
    
    cout << "Enter first number: ";
	cin >> num1;
	
	cout << "Enter second number: ";
	cin >> num2;

	highest(num1, num2); //function call

	system("pause");
	return 0;
}

void highest(int num1, int num2)
{
	int high;

	if(num1 > num2) {
		high = num1;
	}
	else {
		high = num2;
	}

	cout << "Highest = " << high << endl;
}