#include <iostream>
using namespace std;

void PrintLeaders(int arr[], int n){
	int j, i;
	for (i=0; i<n; i++){
		for (j=i+1; j<n; j++){
			if (arr[i] <= arr[j])
				break;
		}
		if (j==n)
			cout<<arr[i]<<" ";

	}
}



int main(){
	int arr[] = {16, 17, 4, 3, 5, 2};
   int n = sizeof(arr)/sizeof(arr[0]);
   PrintLeaders(arr, n);
	return 0;
}
