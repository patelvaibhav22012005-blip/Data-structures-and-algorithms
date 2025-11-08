#include<stdio.h>

void bubble_sort(int arr[], int n){
    int temp;
    for (int i = 0;i < n -1;i++){
        for (int j = 0;j< (n-i-1);j++){
            if (arr[j]> arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}

int main(void){
    int n;
    printf("enter siaze of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : \n ");
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,n);
    printf("sorted arry: \n");
    for (int i = 0;i<n;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}