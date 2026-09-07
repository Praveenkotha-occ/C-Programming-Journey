#include <stdio.h>

int palindrome(int arr[], int left, int right)
{
    if (left >= right)
    {
        return 1;
    }

    if (arr[left] != arr[right])
    {
        return 0;
    }

    return palindrome(arr, left + 1, right - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;

    int result = palindrome(arr, left, right);

    if (result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}