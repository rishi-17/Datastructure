#include<iostream>
using namespace std;
void HeapSort(int a[],int size)
{
	int i,j,t,pc,done;
	for(i=size-1;i>0;i--)
	{
		for(j=0;j<=i;j++)
		{
			pc=j;
			done=0;
			while(pc>0&&pc/2>=0&&done!=1)
			{
				if(a[pc/2]<a[pc])
				{
					t=a[pc/2];
					a[pc/2]=a[pc];
					a[pc]=t;
					pc=pc/2;
				}
				else
				done=1;
			}
		}
		t=a[i];
		a[i]=a[0];
		a[0]=t;
	}
}
int main()
{
	int size,i,j,b;
	cout<<"Enter size: ";
	cin>>size;
	int a[size];
	for(j=0;j<size;j++)
	{
		cout<<"Enter data at "<<j<<":";
		cin>>b;
		a[j]=b;
	}
	HeapSort(a,size);
	for(i=0;i<=size;i++)
	{
		cout<<a[i]<<" ";
	}
}
