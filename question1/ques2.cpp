#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;
    int median;
    int sum=0;
    cout<<"\nEnter the size of array : ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Element of array :";
    for (int i=0; i<n; i++){
      cout<<"\nEnter "<<i+1<<" element of the array : ";
      cin>>arr[i];
      sum = sum + arr[i];
      cout<<"\nMedian : "<<sum / (i+1);
    }
    return 0;
}
