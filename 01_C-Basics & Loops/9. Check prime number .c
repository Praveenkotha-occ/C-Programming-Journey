#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    if (n<0){
        printf("invalid");
    }
    if (n==1){
        printf("neither prime nor composite ");
    }
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            count++;
            printf("not a prime");
            break;
        }
    }
    if (count==0){
        printf("it is prime");
    }
}
