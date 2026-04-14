#include <iostream>
using namespace std;

float triangleArea(float base, float height);
float rectangleArea(float length, float width);
float squareArea(float side);

int main() {
    int choice;

    while (true) {
    	 cout << "Please select the area of the shape to calculate: ";
        cout << "\n1. Triangle\n2. Rectangle\n3. Square\n4. Exit\n";
         cout << "Enter Selection: ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid input!\n";
            continue;
        }

        if (choice == 4) {
            break;
        }

        float a, b;

        switch (choice) {
            case 1:
                cout << "Enter base and height: ";
                cin >> a >> b;
                cout << "Area = " << triangleArea(a, b) << endl;
                break;

            case 2:
                cout << "Enter length and width: ";
                cin >> a >> b;
                cout << "Area = " << rectangleArea(a, b) << endl;
                break;

            case 3:
                cout << "Enter side: ";
                cin >> a;
                cout << "Area = " << squareArea(a) << endl;
                break;
        }
    }

    return 0;
}

float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

float rectangleArea(float length, float width) {
    return length * width;
}

float squareArea(float side) {
    return side * side;
}
