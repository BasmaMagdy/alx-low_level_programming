#include <stdio.h>

int main(void)
{
    char num1;
    char num2;

    printf("%s", "Enter the first number: ");   
    scanf("%d", &num1);
    printf("%s%d\n", "The number entered is:", num1);

    printf("%s", "Enter the second number: ");
    scanf("%d", &num2);
    printf("%s%d\n", "The number entered is:", num2);

    printf("%s%d\n", "The first number entered was:", num1); /* This was done for testing */
    printf("%s%d\n", "The sum is:", num1+num2);

    return 0;
}
