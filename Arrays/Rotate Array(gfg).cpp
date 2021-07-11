// Question Link -> https://www.geeksforgeeks.org/array-rotation/

// Brute-force approach
#include <iostream>
using namespace std;

void rotateArray(int arr[],int n,int d){
    int temp[d];
    int i,j;
    for(i=0; i<d; i++){
        temp[i]=arr[i];
    }
    for(i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(i=n-d, j=0;i<n;i++,j++){
        arr[i]=temp[j];
    }
    for(i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() {
	int T;
	cin>>T;
	while(T>0){
	    
	    int n,d,i;
	    cin>>n>>d;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    rotateArray(arr, n, d);
	    
	    T--;
	}
	return 0;
}