#include <iostream>
using namespace std;

int sum(int n, int arr[]){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum+=arr[i];
	}
	return sum;
}

int main() {
	int n;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Sum of an array is: "<<sum(n, arr);
	return 0;
}