#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int max=0;
    while (n!=0){
        int digit=n%10;
        if (digit>max){
            max=digit;
        }
        n/=10;
    }
    printf("%d",max);
}