#include<iostream>

using namespace std ;
int linear_search(int arr[],int n,int a)
{
    for (int i = 0;i<n;i++){
        if (arr[i] == a){
            return i ;
        }
    }
    return -1;
}
int main()
{
    int n ;
    cout << "Enter the size of array " << endl ;
    cin >> n ;
    int arr[n];
    cout << "Enter the elements of array " << endl ;

    for (int i = 0 ; i< n;i++){
        cin >> arr[i];

    }
    int a ;
    cout << "Enter element to search for : ";
    cin >> a;
    int index = linear_search(arr,n,a);
    if (index == -1){
        cout << "Element not found";
    
    }
    else {
        cout << "Element found at index : " << index ;
    }
} // namespace std 

