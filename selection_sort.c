#include<stdio.h>

void selection_sort(int arr[],int n){
    int min = arr[0];
    int temp;
    for (int i = 0;i < n;i++){
        for (int j = i;j < n ; j++){
            if (arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }

        }
    }
}

int main(void){
    int n;
    printf("enter size of arr: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements\n");
    for (int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    printf("sorted array i s: \n");
    for (int i = 0; i < n ; i ++){
        printf("%d , ",arr[i]);
    }
}