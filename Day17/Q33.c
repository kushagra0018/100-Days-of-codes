/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, armstrong = 0, digit;
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;


    while (n != 0) {
        n = n / 10;
        i++;
    }

    n = original;

    while (n != 0) {
        digit = n % 10;
        armstrong = armstrong + pow(digit, i);
        n = n / 10;
    }

    printf("Armstrong number = %d", armstrong);

    if (armstrong == original)
        printf("\n%d is an Armstrong number.", original);
    else
        printf("\n%d is not an Armstrong number.", original);

    return 0;
}
