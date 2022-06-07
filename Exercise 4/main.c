/* Exercise 4 - Factorial Function
 * Author: Daniel Geula
 * Date: 07/06/2022
 * Version: 1.0
 */

#include <stdio.h>

long long int fact(int n);

int main()
{
    int userNum;

    printf("\nEnter a whole number: ");
    scanf("%d", &userNum);

    printf("\n%d! is %lld.", userNum, fact(userNum));
    
    return 0;
}

long long int fact(int n)
{
    long long int factorial = 1;

    if (n < 0) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}