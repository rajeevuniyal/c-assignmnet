// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    vector<int> a;
    
    int n;
    
    cout<<"enter vector size : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        
        cout<<"enter element : ";
        cin>>x;
        
        a.push_back(x);
    }
    
    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    sort(a.begin(),a.end());
    
    cout<<endl;
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    
    int e;
    
    cout<<"enter element : ";
    cin>>e;
    
    auto it1 = upper_bound(a.begin(),a.end(),e);
    cout<<"upper bound : "<<*it1<<endl;
    
    auto it2 = lower_bound(a.begin(),a.end(),e);
    cout<<"lower bound : "<<*it2<<endl;

    return 0;
}