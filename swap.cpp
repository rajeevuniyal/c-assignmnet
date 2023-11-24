// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> v;
    int size;
    
    cout<<"enter vector size : ";
    cin>>size;
    
    cout<<"---Insertion---"<<endl;
    
    for(int i=0;i<size;i++)
    {
        int x;
        
        cout<<"enter element : ";
        cin>>x;
        
        v.push_back(x);
    }
    
    cout<<endl;
    cout<<"---Before Sorting---"<<endl;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    cout<<"---After Sorting---"<<endl;
    
    for(int i=0;i<v.size();i++)
    {
       for(int j=i+1;j<v.size();j++)
       {
           if(v[i]>v[j])
           {
               swap(v[i],v[j]);
           }
       }
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}