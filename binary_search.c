#include<stdio.h>
#include<stdbool.h>
int binary_search(int arr[],int n , int a){
    int first = 0;
    int last = n-1;
    int mid;
    while (first <= last){
        mid =  (last + first)/2;
        if ( arr[mid] == a){
            return mid;
        }
        else if (a > arr[mid]){
            first = mid +1;
        }
        else {
            last = mid -1;
        }

    }
    return -1;

}

int main(void){
    int n ;
    printf("enter size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter elements of list \n");
    for (int i = 0;i <n;i++){
        scanf("%d",&arr[i]);
    }
    int a ;
    printf("enter element to search for : ");
    scanf("%d",&a);
    n = binary_search(arr,n,a);
    if (n == -1 ){
        printf("element not in the list");

    }
    else{
        printf("element at index %d :",n);
    }
}