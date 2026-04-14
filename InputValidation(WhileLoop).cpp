#include <iostream>
using namespace std;

int main() {
	int number;
	
	//looping until valid input
	while (true) {
		cout << "Enter a number between 5 and 10: ";
		cin >> number;
		
		//checking the valid of the range
		if (number >=5 && number <= 10) {
			break;
		}
		else {
			cout << "Invaid input. Try again. " << endl;
		}
	}
	
	cout << "Your input value has been accepted. " << endl;
	
	return 0;
}