//Problem-link -> https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, j, temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(i=0,j=n-1;i<n/2;i++,j--){
	    temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	}
	cout<<"Reversed Array is: "<<endl;
	for(i=0;i<n;i++){
	    cout<<arr[i];
	}
	return 0;
}