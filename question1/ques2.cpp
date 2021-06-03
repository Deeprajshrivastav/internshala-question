#include<bits/stdc++.h>
using namespace std;

void printMedians(int arr[], int n)
{
	priority_queue<int> s;

	priority_queue<int,vector<int>,greater<int> > g;

	int med = arr[0];
	s.push(arr[0]);

	cout << med << endl;

	for (int i=1; i < n; i++)
	{
		int x = arr[i];
		if (s.size() > g.size())
		{
			if (x < med)
			{
				g.push(s.top());
				s.pop();
				s.push(x);
			}
			else
				g.push(x);

			med = (s.top() + g.top())/2.0;
		}

		else if (s.size()==g.size())
		{
			if (x < med)
			{
				s.push(x);
				med = (int)s.top();
			}
			else
			{
				g.push(x);
				med = (int)g.top();
			}
		}

		else
		{
			if (x > med)
			{
				s.push(g.top());
				g.pop();
				g.push(x);
			}
			else
				s.push(x);

			med = (s.top() + g.top())/2.0;
		}


	}
	cout << med << endl;
}

int main()
{
   int n;
   cout<<"Enter size of array : ";
   cin>>n;
   int arr[n];
   cout<<"\n\t\tEnter "<< n <<" elements of the array \n\n";
   for (int i=0; i<n; i++){
		cout<<"Enter "<<i+1<<" element of an array :";
		cin>>arr[i];
		printMedians(arr, i+1);
   }
	return 0;
}

