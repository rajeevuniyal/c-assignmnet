// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    
    map<int,string> a;
    
    int n;
    
    cout<<"enter map size : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int key;
        string value;
        
        cout<<"enter key : ";
        cin>>key;
        
        cout<<"enter value : ";
        cin>>value;
        
        a.insert(make_pair(key,value));
    }
    
    cout<<endl;
    cout<<"Display : "<<endl;
    for(auto it:a)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    int e;
    
    cout<<"enter element : ";
    cin>>e;
    
    auto it1 = a.upper_bound(e);
    cout<<"upper bound : "<<it1->first<<" "<<it1->second<<endl;
    
    auto it2 = a.lower_bound(e);
    cout<<"lower bound : "<<it2->first<<" "<<it2->second<<endl;

    return 0;
}