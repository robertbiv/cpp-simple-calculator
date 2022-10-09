// Robert Bennethum IV
#include <iostream>
using namespace std;
int numSequence (int);

int main () {
    int num, ans;
    cout << "Enter a number: ";
    cin >> num;
    ans = numSequence(num);
    cout << "Answer is " << ans;
    return 0;
}

int numSequence (int n) {
    if (n<=1) {
        return 1;
    }
    n-=1;
    return n + numSequence(n);
}

/*
 * Base Case:
 * When the number is less than or equal to 1 the number is one
 *
 * Inductive Case
 * Take the number subtracting one; then add it to the recursive function call.
 */
