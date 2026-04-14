// SUBSCRPTION CHECKER
//The program will use include <cstdlib> for rand() and <ctime> for time() to seed it
//The random number is between 0 and 11 which is (rand() % 12)

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main() {
	srand(time(0));
	int daysUntilExpiration = rand() % 12;
	
	cout << "days Until Expiration: " << daysUntilExpiration << endl;
	
	switch (daysUntilExpiration) {
		case 0:
			cout << "Your subscrption has expired. " << endl;
			break;
		case 1:
			cout << "Your subscrption expires within a day!" << endl;
			cout << "Renew now and save 20%" << endl;
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "Your subscription expires in " << daysUntilExpiration << "days" << endl;
			cout << "Renew now and save 10%!" << endl;
			break;
		default:
			if (daysUntilExpiration <=10) {
				cout << "Your subscrption will expire soon. Renew now!" << endl;
			}
			
		    else {
		    	cout << "You have an active subscription" << endl;
			}
			    
}
	return 0;	
		
}

