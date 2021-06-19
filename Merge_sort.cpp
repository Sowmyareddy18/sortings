#include <iostream>
#include<vector>
using namespace std;
void Merge(int a[],int low,int mid,int high)
{
    int left=low,right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(a[left]<a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
	   {
            temp.push_back(a[right]);
            right++;
        }
    }
    while(right<=high)
    {
        temp.push_back(a[right++]);
    }
    while(left<=mid)
    {
        temp.push_back(a[left++]);
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}

void MergeSort(int a[],int low,int high)
{
    if(low==high)
    {
        return;
    }
    int mid=(low+high)/2;
    MergeSort(a,low,mid);
    MergeSort(a,mid+1,high);
    Merge(a,low,mid,high);
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
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
