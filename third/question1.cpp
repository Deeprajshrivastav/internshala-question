#include<iostream>
using namespace std;
void PrintIntersection(int first[], int n, int second[], int m){
	int j=0, i=0;
	while(i<n && j<m){
		if (first[i] < second[j]){
			i++;
		}
		else if (first[i] > second[j]){
			j++;
		}
		else{
			cout<<first[i]<<" ";
			i++;
			j++;
		}
	}

}
void PrintUnion(int first[], int n, int second[], int m){
	int j=0, i=0;
	while(i<n && j<m){
		if (first[i] < second[j]){
			cout<<first[i]<<" ";
			i++;
		}
		else if (first[i] > second[j]){
			cout<<second[j]<<" ";
			j++;
		}
		else{
			cout<<first[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n){
		cout<<first[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<second[j]<<" ";
		j++;
	}

}

int main()
{
	 int first[] = { 1, 2, 4, 5, 6 };
    int second[] = { 2, 3, 5, 7 };
    int m = sizeof(first) / sizeof(first[0]);
    int n = sizeof(second) / sizeof(second[0]);
    cout<<"Union of array : ";
    PrintUnion(first, n, second, n);
    cout<<"\nIntersection of array : ";
    PrintIntersection(first, n, second, n);
}
