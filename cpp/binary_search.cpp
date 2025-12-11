#include<iostream>

using namespace std;
int binary_search(int arr[],int n , int a){
    int first = 0;
    int last = n-1;
    while (first <= last ){
        int mid = (first + last )/2;
        if (arr[mid] == a){
            return mid;
        }
        else if (a > arr[mid]){
            first = mid + 1;
        }
        else {
            last = mid - 1 ;
        }

        
    }
    return -1;
}

int main(){
    int n ;
    cout << "enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements of array in ascending order";
    for (int i = 0 ;i < n;i++){
        cin >> arr[i];

    }
    int a;
    cout << "enter number to search for";
    cin >> a;
    int index = binary_search(arr,n,a);
    if (index == -1){
        cout << "Element not found";

    }
    else {
        cout << "element present at index: "<< index ;
    }
    return 0;
}