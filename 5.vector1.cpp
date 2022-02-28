#include<iostream>
#include<vector>
using namespace std;

class Vector
{
	vector<int> v;
	vector<int> cpy;
	public:
		Vector()
		{
		}
		Vector(int n)
		{
			int x;
			//vector<int> v;
			std::cout<<"Enter values ";
			for(int i=0;i<n;i++)
			{
				std::cin>>x;
				v.push_back(x);
			}
			std::cout<<"Values in vector are "<<std::endl;
			vector<int> :: iterator it;
			for(it=v.begin();it!=v.end();it++)
			{
				cout<<*it<<"  ";
			}
			std::cout<<std::endl;
			cout<<"Constructor ends here  "<<endl;
		}
		Vector( Vector &v1)
		{
			cpy = v1.v; // Means storing values of v vector datatype from v1 class
			vector<int> :: iterator it;
			for(it=cpy.begin();it!=cpy.end();it++)
			{
				std::cout<<*it<<"  ";
			}
			std::cout<<std::endl;
			std::cout<<"Copy Constructor ends here  "<<std::endl;
		}
		Vector& operator =(const Vector &asign)
		{
			cpy=asign.v;
			vector<int> :: iterator it1;
			for(it1=cpy.begin();it1!=cpy.end();it1++)
			{
				std::cout<<*it1<<"  ";
			}
			std::cout<<"Assignment operator ends here  "<<std::endl;
			return *this;
		}
		~Vector()
		{
			std::cout<<"Destructor called "<<std::endl;
		}
	
};

int main()
{
	int n;
	cout<<"Enter req no. of values for vector ";
	cin>>n;
	Vector v1(n);
	Vector v2(v1);
	Vector v3;
	v3=v2;
}
