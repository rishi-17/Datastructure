#include<iostream>
using namespace std;
void bubblesort(int a[],int size)
{
	int i,j,t;

	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}	
		}
	}
}
int main()
{
	int size=0,i,j,b;
	cout<<"Enter Size:"<<endl;
	cin >>size;
	int a[size];
	for(j=0;j<=size-1;j++)
	
	{
		cout<<"Enter Data in : "<<j<<":";
		cin>>b;
		a[j]=b;
	}
	bubblesort(a,size);
	for(i=0;i<size-1;i++)
	{
		cout<<a[i]<<" ";
	}

}

	
	
	

