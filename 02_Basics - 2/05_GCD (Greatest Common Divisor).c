#include<stdio.h>
int main(){
    int first;
    scanf("%d",&first);
    int second;
    scanf("%d",&second);
    int smaller;
    if (first<second){
        smaller=first;
    }
    else{
        smaller=second;
    }
    for (int i=smaller ; i>=1 ;i--){
        if (first%i==0 && second%i==0){
            printf("%d",i);
            break;
        }
    }
}