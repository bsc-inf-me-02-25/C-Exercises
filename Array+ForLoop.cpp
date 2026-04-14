#include <iostream>
using namespace std;

int main() {
	//declaring the array
	string arrayList[8] = {
		"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B129"
	};
s
	cout <<"Elements in Array sthat start with 'B'" << endl;
	
	// looping through the array
	for (int i = 0; i < 8; i++) {
		//checks if the letter is 'B'
		if (arrayList[i][0] == 'B') {
			cout << arrayList[i] << endl;
		}
	}
	
	return 0;
}