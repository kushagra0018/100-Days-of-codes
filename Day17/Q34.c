/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}