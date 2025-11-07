#include<stdio.h>
int search_linear(int arr[],int n ,int a){
    
    for (int i =0;i < n;i++){
        if (arr[i] == a){
            printf("Element found at index %d",i);
            return i;
        }
    }
    printf("Element not found!!");
    return 1;
}


