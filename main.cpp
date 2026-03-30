#include "functions.h"


int main() {

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int sumSquares = sumOfSquares(n);
    int factorial = findFactorial(n);

    cout << "Sum of squares from 1 to " << n << " is: " << sumSquares << endl;
    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
   
}