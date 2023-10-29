#include <iostream>

//using std::cout, std::cin, std::string, std::ws, std::endl;
using namespace std;

int main() {

	char op; //operator
	double num1;
	double num2;
	double result;

	string border = "*************** VERY COOL CALCULATOR ***************";
	string endBorder = "****************************************************";


	cout << border << '\n';
	cout << '\n';

	while(true) {

	cout << "What calculation would you like to perform?\n(Enter either + - * / or Q to quit): ";
	cin >> op;
	cout << '\n';

	//detect quiting and if input was 0

	switch(op) {

	case 'q':
	case 'Q':
		cout << "Quitting!";
		return 0;
		break;
	case '0':
		cout << "You did not enter the correct option.\n";
		break;
	}

	
	//enter numbers
	cout << "Enter the first number: ";
	cin >> num1;
	cout << '\n';

	cout << "Enter the second number: ";
	cin >> num2;
	cout << '\n';


	//do stuff with the numbers and more validation
	switch(op) {

	case '+':
		result = num1 + num2;
		cout << num1 << " + " << num2 << " = " << result << '\n';
		break;

	case '-':
		result = num1 - num2;
		cout << num1 << " - " << num2 << " = " << result << '\n';
		break;

	case '*':
		result = num1 * num2;
		cout << num1 << " * " << num2 << " = " << result << '\n';
		break;

	case '/':
		result = num1 / num2;
		cout << num1 << " / " << num2 << " = " << result << '\n';
		break;
		
	default:
		cout << "You did not enter the correct option.\n";
		break;

	}


	//display end border :)
	cout << '\n' << endBorder << '\n';
	cout << '\n';
	}


	return 0;

}
