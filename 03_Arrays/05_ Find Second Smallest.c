#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0 ; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int smallest=INT_MAX;
    int second_smallest=INT_MAX;

    for (int i=0 ; i< n; i++){
        if (arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if (arr[i]<second_smallest && arr[i] != smallest){
            second_smallest=arr[i];
        }
    }
    if(second_smallest==INT_MAX) {
        printf("Second smallest does not exist.");
    } else {
        printf("%d",second_smallest);
    }
}