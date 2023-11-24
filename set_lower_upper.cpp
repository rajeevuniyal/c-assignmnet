// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    
    set<int> a;
    
    int n;
    
    cout<<"enter map size : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"enter element : ";
        cin>>x;
        
        a.insert(x);
    }
    
    cout<<endl;
    cout<<"Display : "<<endl;
    for(auto it:a)
    {
        cout<<it<<" "<<endl;
    }
    
    int e;
    
    cout<<"enter element : ";
    cin>>e;
    
    auto it1 = a.upper_bound(e);
    cout<<"upper bound : "<<*it1<<endl;
    
    auto it2 = a.lower_bound(e);
    cout<<"lower bound : "<<*it2<<endl;

    return 0;
}