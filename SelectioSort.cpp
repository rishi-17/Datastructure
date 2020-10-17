#include<iostream>
using namespace std;
void SelectionSort(int a[],int size)
{
	int i,j,min,pos;
	for(i=0;i<size;i++)
	{
		min=a[i];
		pos=i;
		for(j=i+1;j<size;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=min;
	}
}
int main()
{
	int size,i,j,b;
	cout<<"Enter the size:";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cout<<"Enter data in "<< i<<":";
		cin>>b;
		a[i]=b;
	}
	SelectionSort(a,size);
	for(j=0;j<size;j++)
	{
		cout<<a[j]<<" ";
	}
		
	
}
