#include<iostream>
using namespace std;
class Base
{
	public:
	 void display()
	 {
	 	cout<<"This is the base class."<<endl;
	 }
};
class Derived:public Base
{
	public:
	 void display()
	 {
	 	cout<<"This is the derived class."<<endl;
	 }
};
int main()
{
	Base baseObject;
	Derived derivedObject;
	//Pointer to the derived class object using a base class pointer
	Base*ptr=&derivedObject;
	//Call the base class function
	baseObject.display();
	//Call the derived class function
	derivedObject.display();
	//Call the derived class function due to late binding
	ptr->display();
	return 0;
}
