#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Check if input is an integer
    if (cin.fail()) {
        cout << "Invalid input. Please enter a valid integer." << endl;
    } else {
        if (num % 2 == 0) {
            cout << num << " is Even." << endl;
        } else {
            cout << num << " is Odd." << endl;
        }
    }

    return 0;
}
