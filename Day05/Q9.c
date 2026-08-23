/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>

int main() {
    float P;
    float R;
    float T;
    float CI; 
    float amount;

    printf("Enter Principal :");
    scanf("%f", &P);

    printf("Enter Rate :");
    scanf("%f", &R);


    printf("Enter Time :");
    scanf("%f", &T);

    amount = P;

    for (int i = 1; i <= T; i++) {
        amount = amount * (1 + R / 100);
    }

    CI = amount - P;

    printf("Simple Interest=%.0f, Compound Interest=%.2f",
           (P * R * T) / 100 , CI);

    return 0;
}


