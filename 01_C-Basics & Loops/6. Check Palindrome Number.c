#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    int org=n;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    if (org==rev){
        printf("It is palindrome");
    }
    else{
        printf("not a palindrome");
    }
}
