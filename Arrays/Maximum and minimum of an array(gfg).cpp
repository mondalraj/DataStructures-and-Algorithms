// Question Link -> https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

//Brute-force approach
#include <iostream>
using namespace std;

int main() {
	int n, i, j, temp;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	int min=arr[0], max=arr[0];
	for(i=1;i<n;i++){
	    if(min>arr[i]){
	        min=arr[i];
	    }
	}
	for(i=1;i<n;i++){
	    if(max<arr[i]){
	        max=arr[i];
	    }
	}
	cout<<"Min:"<<min<<endl;
	cout<<"Max:"<<max<<endl;
	return 0;
}