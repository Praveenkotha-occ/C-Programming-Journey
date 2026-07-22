#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int rev = 0;
    while (number != 0)
    {
        int rem = number % 2;
        rev = rev * 10 + rem;
        number = number / 2;
    }
    int binary = 0;
    while (rev != 0)
    {
        int digit = rev % 10;
        binary = binary * 10 + digit;
        rev /= 10;
    }
    printf("%d", binary);
    return 0;
}