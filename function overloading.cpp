#include<iostream>
using namespace std;
class add
{
	public:
	 int value;
	 add(int val)
	 {
	 	value=val;
	 }
	 //Overload + operator
	 add operator+(add &a)
	 {
	 	int sm=value+a.value;
	 	cout<<"Addition: "<<sm<<endl;
 	}	 
};
int main()
{
	add num1(5);
	add num2(10);
	add result=num1+num2;
	return 0;
}
