#include <iostream>
#include <stdlib.h>
#include "dum_funcs.h"

using std::cout, std::getline, std::cin, std::endl, std::ws;


int main() {
	int num, num2;

	system("cls");

	cout << "Would you like to check if a number is prime or odd/even?\n";
	cout << "1 or prime, 2 for odd/even: ";
	cin >> num2;
	cout << '\n';

	switch(num2) {
		case 1:
			prime(num);
			break;
		case 2:
			odd(num);
			break;
		default:
			cout << "You did not enter a correct value!" << '\n';
			system("pause");
			return 1;
	
	}

	cout << '\n' << "also vim is cool" << '\n';
	system("pause");
	
	return 0;
}
