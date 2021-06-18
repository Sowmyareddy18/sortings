#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
		//bubble sort 
	for(int i=0;i<n-1;i++)
	{
		int swaped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				swaped=1;
			}
		}
		if(swaped==0)
		{
			break;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
