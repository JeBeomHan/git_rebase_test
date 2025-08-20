#include <iostream>

using namespace std;

int func_minus(const int& num1, const int& num2);

int main(void){
	int input;
	
	cout << "1 is add\n";
        cout << "2 is subtract\n";
        cout << "3 is multiple\n";
        cout << "4 is divide\n";

	cout << "choose function: ";
	cin >> input;
	cout << "\n";
	cout << "Enter num1 and num 2\n";

	int num1;
	cout << "num1: ";
	cin >> num1;
	cout << "\n";
	int num2;
	cout << "num2: ";
	cin >> num2;
	cout << "\n";

	int result = 0;
	switch(input){
		case 1: break;
		case 2: cout << func_minus(num1, num2) << '\n\n'; break;
		case 3: break;
		case 4: break;
	}
	cout << '\n';
}

void printMenu(void){
	cout << "1 is add\n";
	cout << "2 is subtract\n";
	cout << "3 is multiple\n";
	cout << "4 is divide\n";
}

int func_minus(const int& num1, const int& num2){
	return num1 - num2;
}
