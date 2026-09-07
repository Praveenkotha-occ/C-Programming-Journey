#include<stdio.h>
int fibnocci ( int n ){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else {
        return fibnocci(n-2)+fibnocci(n-1);
    }
}
int main (){
    int n;
    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++){
        printf("%d ",fibnocci(i));
    }
}
