#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first = 0;
    int second = 1;
    int third;
    for(int i = 0; i <n; i++)
    {
        printf("%d ", first);
        third = first + second;
        first = second;
        second = third;
    }
    return 0;
}
