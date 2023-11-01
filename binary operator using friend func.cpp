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
	 friend add operator+(add &a);
};
add operator+(add &b, add &a)
{
	 	int sm=b.value+a.value;
	 	cout<<"Addition: "<<sm<<endl;	
} 
int main()
{
	add num1(5);
	add num2(10);
	add result=num1+num2;
	return 0;
}
