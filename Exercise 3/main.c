/* Exercise 3 - Function to return max
 * Author: Daniel Geula
 * Date: 06/06/2022
 * Version: 1.0 */

#include <stdio.h>

int findLargest(int n1, int n2, int n3);

int main()
{
    int userNum1, userNum2, userNum3;

    printf("\nEnter three integer values: ");
    scanf("%d %d %d", &userNum1, &userNum2, &userNum3);

    // print return value of findLargest() by passing userNum1-3 to n1-3
    printf("\nLargest number is %d.\n", findLargest(userNum1, userNum2, userNum3));
    
    return 0;
}

int findLargest(int n1, int n2, int n3)
{
    int largest = n1;   // starting with n1 as largest

    if (n2 > largest)   // test if n2 > n1
    {
        largest = n2;   // if true, n2 is largest
    }
    if (n3 > largest)   // test if n3 > current largest
    {
        largest = n3;   // if true, n3 is largest
    }

    return largest;     // return value of 'largest'
}