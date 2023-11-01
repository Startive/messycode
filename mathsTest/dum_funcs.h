#include <iostream>

using std::cout, std::getline, std::cin, std::endl, std::ws;

void prime(int num)
{
	
	int i;
	bool is_prime = true;

	cout << "Enter a number: ";
	cin >> num;

	// 0 and 1 are not prime numbers
  	if (num == 0 || num == 1) {
    	is_prime = false;
  	}

  	// loop to check if n is prime
  	for (i = 2; i <= num/2; ++i) {
    	if (num % i == 0) {
      	is_prime = false;
      	break;
    		}
  	}

	if(is_prime)
		cout << num << " is a prime number.";
	else
		cout << num << " is not a prime number.";

	cout << '\n';
}


void odd(int num)
{
	cout << "Enter a number: ";
	cin >> num;

	num % 2 ? cout << num << " is an odd number." : cout << num << " is an even.";
	cout << '\n';

}
