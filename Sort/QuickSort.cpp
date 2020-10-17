#include<iostream>
using namespace std;
int QuickSort(int start,int end,int a[])
{
	int i,j,t,pivot;
	i=start;
	j=end;
	pivot=start;
	while (i<j)
	{
		while(a[j]>a[pivot])
		{
			j--;
		}
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	if(i<end)
	{
		return(QuickSort(i+1,end,a));
	}
}
int main()
{
	int size,i,j,b;
	int start=0,end=size;
	cout<<"Enter the size:";
	cin>>size;
	int a[size];
	for(j=0;j<=size-1;j++)
	{
		cout<<"Enter data in "<< j<<":";
		cin>>b;
		a[j]=b;
	}
	QuickSort(0,size-1,a);
	for(i=0;i<=size-1;i++)
	{
		cout<<a[i]<<" ";
	}
		
	
}
