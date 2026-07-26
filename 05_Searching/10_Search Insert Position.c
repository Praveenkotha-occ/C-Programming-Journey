#include<stdio.h>
int search_insert_pos(int arr[], int n , int key){
    int left = 0 ;
    int right = n -1 ;
    while (left <= right){
        int mid = (left + (right - left)/2);
        if ( arr[mid]==key){
            return mid;
        }
        else if (arr[mid] > key){
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return left;
}

int main(){
    int n ; scanf("%d",&n);
    int arr[n];
 
    for (int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
 
    int key ; scanf("%d",&key);
 
    int result = search_insert_pos(arr,n,key);
    printf("%d", result);
 
}
