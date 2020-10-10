#include<iostream>
using namespace std;
int Q[100];
int rear =0,front=0,MaxSize=0,count=0;
void createQueue(int size)
{
	MaxSize=size;
	front=0;
	rear=-1;
	count = 0;
}
void Enqueue(int e)
{
rear=(rear+1)%MaxSize;
count++;
Q[rear]=e;
}
int Dequeue()
{
int temp;
count--;
temp=Q[front];
front=(front+1)%MaxSize;
return temp;
}
int isFull()
{
	if(count==MaxSize)
	return 1;
	else

		return 0;
	
}
int isEmpty()
{
	if(count==0)
	return 1;
	else 
	return 0;
}
void printqueue()
{
	int i,c;
	c=0;
	i=front;
	while(c<count)
	{
		cout<<Q[i]<<" ";
		i=(i+1)%MaxSize;
		c=c+1;
	}
}
int main()
{
	int a,i,b,e;
	cout<<"Enter no : ";
	cin>>a;
	createQueue(a);
	 do
    {
        cout<<"\n1.Enqueue: \n2.Dequeue \n3.isFull\n4.isEmpty\n5.printqueue\n0:Exit\n:";
        cin>>b;
        switch(b)
        {
			case 1:
			if(isFull()==1)
			cout<<"Full";
            else
            {
                cout<<"Enter data:";
                cin>>e;
                Enqueue(e);
            }
			break;
			
			case 2:
			Dequeue();
			break;
			
			case 3:
			isEmpty();
			break;
			
			case 4:
			isFull();
			break;
			
			case 5:
			printqueue();
			break;
			
			case 0:
			cout<<"Exiting";
			break;
		}
	}
	while(b!=0);
}

