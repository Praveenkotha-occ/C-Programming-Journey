#include<stdio.h>
int main(){
    int first;
    scanf("%d",&first);
    int second ;
    scanf("%d",&second);
    int great;
    if (first>second){
        great=first;
    }
    else{
        great=second;
    }
    while(1){
        int i = great;
        if (i%first==0 && i%second==0){
            printf("%d",i);
            break;
        }
        else{
            great++;
        }
    }
}