#include<stdio.h>
void insertion_sort(int arr[],int n ){
    int temp;
    for(int i = 1;i<n;i++){
        temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1 ] = temp;
    }
}

int main(void){
    int n ;
    printf("enter size of an array; ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("sorted array is : \n");
    for (int i = 0 ;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;


}