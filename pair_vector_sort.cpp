// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<pair<int,int>> v;
    int size;
    
    cout<<"enter vector size : ";
    cin>>size;
    
    cout<<"---Insertion---"<<endl;
    
    for(int i=0;i<size;i++)
    {
        int x,y;
        
        cout<<"enter first element of pair : ";
        cin>>x;
        
        cout<<"enter second element of pair : ";
        cin>>y;
        
        v.push_back(make_pair(x,y));
    }
    
    cout<<endl;
    cout<<"---Before Sorting---"<<endl;
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    cout<<endl;
    cout<<"---After Sorting---"<<endl;
    
    for(int i=0;i<v.size();i++)
    {
       for(int j=i+1;j<v.size();j++)
       {
           if(v[i].first>v[j].first)
           {
               swap(v[i],v[j]);
           }
       }
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    

    return 0;
}