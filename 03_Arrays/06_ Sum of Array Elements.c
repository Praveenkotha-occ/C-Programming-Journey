#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n ; i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}

//optimized
/*
#include<stdio.h>
int main() {
    int n, sum = 0, num;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&num);
        sum += num;
    }
    printf("Sum = %d", sum);
    return 0;
}
    */