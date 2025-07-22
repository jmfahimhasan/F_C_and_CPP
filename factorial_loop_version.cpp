#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int fact = 1;
        for (int i = 2; i <= n; ++i)
            fact *= i;

        cout << "Factorial of " << n << " is: " << fact << endl;
    }

    return 0;
}