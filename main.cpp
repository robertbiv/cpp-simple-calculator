// Robert Bennethum IV
#include <iostream>
using namespace std;
int quotient(int, int);
int main() {
    int num1, num2;
    cout << "Enter first number (divider): ";
    cin >> num1;
    cout << "Enter second number (divisor): ";
    cin >> num2;
    int ans = quotient(num1, num2);
    cout << "Answer is " << ans << endl;
    return 0;
}

int quotient(int n1, int n2) {
    if(n1<n2) {
        return 0;
    }
    n1 -= n2;
    return 1 + quotient(n1, n2);
}

/*
 * Base Clause
 * When the second number (divisor) is less than the first number (divider)
 * the problem is no longer able to be continuously solved, so return 0 for 0 times divided.
 *
 * Inductive Case
 * For any number that is able to be divided;
 * Subtract the divider by the divisor and run the program again while adding one to the recursive function call.
 */