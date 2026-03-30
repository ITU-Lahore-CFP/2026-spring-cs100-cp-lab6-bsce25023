#include "functions.h"


int sumOfSquares(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;

}

int findFactorial(int n)
{
    if (n == 0) {
        return 1;
    }
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}
