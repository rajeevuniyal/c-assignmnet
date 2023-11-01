#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"enter the value of a and b: ";
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		c=a/b;
		cout<<c<<endl;
	}
	catch(int exp)
	{
		cout<<"Division error"<<endl;
	}
	cout<<"Hello";
