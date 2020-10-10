#include<iostream>
#include<string.h>
using namespace std;
int s[100];
int maxsize,tos;
void stack(int n)
{
	maxsize=n;
	tos=-1;
}
void push(char e)
{
	tos++;
	s[tos]=e;
}
char pop()
{
	char temp;
	temp=s[tos];
	tos--;
	return temp;
}
int isEmpty()
{
	if(tos==-1)
		return 1;
	else
		return 0;
}
int prelogic(int a,int b,char c)
{
	if(c=='+')
	return(a+b);
	else if(c=='-')
	return (a-b);
	else if(c=='*')
	return (a*b);
	else if (c=='/')
	return (a/b);

}
void printstack()
{
	int i;
	for(i=tos;i>-1;i--)
	{
		cout<<s[i];
	}
}
int main()
{
	char prefix[100],c;
	int pi=0,i;
	cout<<"Enter prefix: ";
	cin>>prefix;
	int k=strlen(prefix);
	stack(k);
	
	for(int i=strlen(prefix);i>=0;i--)
	{
		c=prefix[i];
		switch(c)
		{
		
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':
				int b;
				b=pop();
				int a;
				a=pop();
				int z;
				z=prelogic(b,a,c);
				push(z);
				break;
				default:
					char x=c;
					int no=x-'0';
					if(no>=0&&no<=9)
					push(no);
					break;
				}
			}
			printstack();
			
		}

