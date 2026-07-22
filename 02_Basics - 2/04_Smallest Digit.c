#include<stdio.h>
#include<limits.h> 
int main(){
    int n ;
    scanf("%d",&n);
    int small=INT_MAX; // INT_MAX represents highest integer value
    while(n!=0){
        int digit=n%10;
        if(digit<small){
            small=digit;
        }
        n/=10;
    }
    printf("%d",small);
}