#include<stdio.h>
void reverse_array(int arr[], int n ){
    if ( n == 0){
        return ;
    }
    else {
        printf("%d", arr[n-1]);
        reverse_array( arr , n-1);
    }

}

int main(){
    int n ; scanf("%d", &n);
    int arr[n];

    for ( int i  = 0 ; i < n ; i ++){
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, n);
}