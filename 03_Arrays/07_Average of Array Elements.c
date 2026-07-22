#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n <= 0) return 0;
    int sum=0;
    int arr[n];
    for (int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float avg = (float)sum / n;
    printf("%.3f",avg);
}