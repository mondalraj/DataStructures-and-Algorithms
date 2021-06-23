#include<bits/stdc++.h>
using namespace std;

int min(int arr[], int n){
    int min_value= arr[0];
    for(int i=0; i<n; i++){
        if(min_value > arr[i]){
            min_value = arr[i];
        }
    }
    return min_value;
}

int max(int arr[], int n){
    int max_value= arr[0];
    for(int i=0; i<n; i++){
        if(max_value < arr[i]){
            max_value = arr[i];
        }
    }
    return max_value;
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min_num = min(arr, n);
    int max_num = max(arr, n);
    cout<<"Minimum no. in the array is: "<<min_num;
    cout<<"\nMaximum no. in the array is: "<<max_num;
    return 0;
    getch();
}