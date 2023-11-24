// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int a[100]={2,9,3,4,6,5};
    
    cout<<"Previous array"<<endl;
    
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Current array"<<endl;
    
    for(int i=0;i<6;i++)
    {
        int max=a[i];
        
        for(int j=i+1;j<7;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                break;
            }
            
            else
            {
                max=-1;
                break;
            }
        }
        cout<<"max : "<<max<<endl;
    }
    
    return 0;
}