#include<iostream>
using namespace std;

int *RotateArray(int arr[], int d, int n){
	int temp[n];
	for (int i=0; i<d; i++){
		temp[i] = arr[i];
	}
	for (int i=d; i<n; i++){
		arr[i-d] = arr[i];
	}
	for (int i=0; i<d; i++){
		arr[n-d+i] = temp[i];
	}
	return arr;

}
int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int n=6;
	int d=2;
	RotateArray(arr, 2, n);
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
