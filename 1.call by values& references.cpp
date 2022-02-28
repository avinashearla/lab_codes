#include<iostream>
using namespace std;
void callbyval(int ,int);
void callbyref(int*,int*);
void arraysum(int*,int);
int main()
{   int a,b;
	cout<<"enter the element"<<endl;
	cin>>a>>b;
	callbyval(a,b);
	cout<<"elements after swaping by value"<<endl<<a<<endl<<b<<endl;
	callbyref(&a,&b);
	cout<<"elements after swapping by reference"<<endl<<a<<endl<<b<<endl;
	int n,i;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int x[n];
	cout<<"enter the values of the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		
	}
     arraysum(x,n);
     return 0;
	
}
void callbyval(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
}
void callbyref(int *x,int *y)
{int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	
}
void arraysum(int *x,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=x[i];
		
	}
		cout<<"Sum of given array is "<<sum<<endl;
}