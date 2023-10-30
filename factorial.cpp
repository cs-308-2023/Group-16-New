#include <iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) {
        cout << "Please enter a non-negative number: ";
        cin >> n;
        return factorial(n);
    } else if (n == 0) {
        return 1; 
    } else {
        return n * factorial(n - 1);
    }
}

