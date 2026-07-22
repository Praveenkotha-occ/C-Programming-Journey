#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    scanf("%d",&n);
    int num=n+1;
    while (1){
        int prime =1;
        for ( int i =2; i<=sqrt(num) ;i++){
            if (num%i==0){
                prime=0;
                break;
            }
        }
        if (prime==1){
            printf("%d",num);
            break;
        }
        num++;
    }
}
