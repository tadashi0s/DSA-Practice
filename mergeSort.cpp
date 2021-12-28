#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int st,int mid,int end)
{
	int n=mid-st+1;
	int m=end-mid;
	int *arr1=new int[n];
	int *arr2=new int[m];
	for(int i=0;i<n;i++)
	{
		arr1[i]=arr[st+i];
	}
	for(int j=0;j<m;j++)
	{
		arr2[j]=arr[mid+1+j];
	}
	int i=0,j=0,k=st;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<n)
	{
		arr[k]=arr1[i];
		i++;
		k++;
	}
	while(j<m)
	{
		arr[k]=arr2[j];
		j++;
		k++;
	}
}
void mergeSort(int *arr,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	int mid=(start+end)/2;
	mergeSort(arr,start,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,start,mid,end);
}
int main()
{
	int size;
	cin>>size;
	int *arr=new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	mergeSort(arr,0,size-1);
		for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
