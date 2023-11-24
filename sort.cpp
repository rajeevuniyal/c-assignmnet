// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int v[100];
    int size;
    
    cout<<"enter array size : ";
    cin>>size;
    
    cout<<"---Insertion---"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<"enter element : ";
        cin>>v[i];
    }
    
    cout<<endl;
    cout<<"---Before Sorting---"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    
    sort(v,v+size);
    
    cout<<endl;
    cout<<"---After Sorting---"<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}