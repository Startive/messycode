#include <iostream>
#include <stdlib.h>
#include "dum_funcs.h"

using std::cout, std::getline, std::cin, std::endl, std::ws;

int main() {
	int num, num2;

	//not really needed but why not :)
	system("cls");

	cout << "Would you like to check if a number is prime or odd/even?\n";
	cout << "1 for prime, 2 for odd/even: ";
	cin >> num2;
	cout << '\n';


	switch(num2) {
		case 1:
		{	
			cout << "Enter a number: ";
			cin >> num;

			if(prime(num))
				cout << num << " is a prime number.";
			else
				cout << num << " is not a prime number.";
			cout << '\n';
			break;
		}
		case 2:
		{
			cout << "Enter a number: ";
			cin >> num;

			odd(num);
			cout << '\n';
			break;
		}
		default:
		{
			cout << "You did not enter a number!" << '\n';
			system("pause");
			return 1;
		}	
	
	}

	cout << '\n' << "also vim is cool" << '\n';
	system("pause");
	
	return 0;
}
