#include <iostream>

using namespace std;
// function for finding smallest element in array
int smallest(int arr[], int n){
   int small = arr[0];

   for(int i=0; i<n; i++){
      if (small > arr[i]){
         small = arr[i];
      }
   }
   return small;

}


// function for finding second smallest element in array
int SecondSmallest(int arr[], int n){
   int seconSmall = INT_MAX;
   int firstSmall = INT_MAX;

   for (int i=0; i<n; i++){
      if (firstSmall > arr[i]){
         seconSmall = firstSmall;
         firstSmall = arr[i];
      }
      else if (arr[i] < seconSmall && arr[i] != firstSmall){
         seconSmall = arr[i];
      }
   }
   return seconSmall;
}


int main()
{
    int arr[] = {12, 13, 5, 10, 34, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Smallest element in array : "<<smallest(arr, n);
    cout<<"\nSecond Smallest element in array : "<<SecondSmallest(arr, n);
    return 0;
}
