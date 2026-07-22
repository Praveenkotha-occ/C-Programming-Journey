#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int thirdLargest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
        {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        }
        else if(arr[i] > thirdLargest && arr[i] != largest && arr[i] != secondLargest)
        {
            thirdLargest = arr[i];
        }
    }
    printf("Largest = %d", largest);
    printf("Second Largest = %d", secondLargest);
    printf("Third Largest = %d", thirdLargest);
    return 0;
}