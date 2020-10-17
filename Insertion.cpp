#include<iostream>
using namespace std;
void insertionSort(int a[],int size)
{
	int i,j,newelement;
	for(i=0;i<size;i++)
	{
		j=i+1;
		newelement=a[j];
		while(j>0&&newelement<a[j-1])
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=newelement;
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
	insertionSort(a,size);
	for(j=0;j<size;j++)
	{
		cout<<a[j]<<" ";
	}
		
	
}
