#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    if (n<=0){
        printf("invalid input");
        return 0;
    }
    int arr[n];
    for(int i =0 ; i<n ;  i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i=1 ; i<n ; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest element in array:%d", max);
}
