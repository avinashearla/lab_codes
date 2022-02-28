/*Function overloading: writing string operations like strcat and strncat, strcpy and strncpy
as overloaded functions. */
#include<iostream>
using namespace std;
void strcpy(string s1)
{
	string s;
	s=s1;
	cout<<"The copied sentence is "<<s<<endl;
}
void strcpy(string s1,int n)
{
	string s;
	s=s1;
	int i;
	cout<<"String after n copy is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<s[i];
	}
	
}
void strcat(string s1, string s2)
{
	string s;
	s=s1+s2;
	cout<<"String after concatenation is "<<endl;
	cout<<s;
}
void strcat(string s1, string s2,int n)
{
	string s;
	int i;
	s=s1+s2;
	cout<<"String after n concatenation is "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<s[i];
	}
}
void check(int ch)
{
  try
  {
	int n;
	string s1,s2;
	if(ch==1)
	{
		cout<<"Enter a word/sentence"<<endl;
		getline(cin, s1);
		getline(cin,s1);
		strcpy(s1);
	}
	else if (ch==2)
	{
		cout<<"Enter a word/sentence"<<endl;
		getline(cin,s1);
		getline(cin,s1);
		cout<<"Enter limit ";
		cin>>n;
		strcpy(s1,n);
	}
	else if(ch==3)
	{
		cout<<"Enter sentence 1 "<<endl;
		getline(cin,s1);
		getline(cin,s1);
		cout<<"Enter sentence 2  "<<endl;
		getline(cin,s2);
		strcat(s1,s2);
	}
	else if(ch==4)
	{
		cout<<"Enter sentence 1 "<<endl;
		getline(cin,s1);
		getline(cin,s1);
		cout<<"Enter sentence 2  "<<endl;
		getline(cin,s2);
		cout<<"Enter limit ";
		cin>>n;
		strcat(s1,s2,n);
	}
	if(ch<0 || ch>4)
	{
		throw ch;
	}	
  }
  catch(int ch)
  {
   		cout<<"Enter valid number"<<endl;
		cin>>ch;
		check(ch);
  }
	
}

int main()
{
	int ch;
	cout<<"Enter 1 String Copy\n 2 String n copy \n 3 String Concatenation\n 4 String n concatenation"<<endl;
	cin>>ch;
	check(ch);
	return 0;
}