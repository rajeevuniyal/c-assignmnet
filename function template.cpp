#include<iostream>
using namespace std;
class Negation
{
	public:
	 int x, y;
	 Negation(int a, int b)
	 {
	 	this->x=a;
	 	this->y=b;
	 }
	 //Overload - operator
	 void operator-()
	 {
	 	x=-x;
	 	y=-y;
 	}	 
};
int main()
{
	Negation d1(8, 9);
	cout<<"\nx : "<<d1.x<<",y : "<<d1.y;
	-d1;
	cout<<"\nx : "<<d1.x<<",y : "<<d1.y;
	return 0;
}
