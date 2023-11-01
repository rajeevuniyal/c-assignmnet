#include<iostream>
using namespace std ;

template <class T1>
class temp
{
   public:
     T1 value;
     temp(T1 val)
     {
     	value=val;
     	cout<<"Result:"<<value<<endl;
     }
 };
 int main()
 {    

  temp<char>t('C');
  temp<string>u("C++");
  temp<int>v(45);
  temp<float>w(8.7);
 }
