// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int a[100];
    
    int n;
    
    cout<<"enter array size : ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter element : ";
        cin>>a[i];
    }
    
    cout<<"Before Sorting : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    sort(a,a+n);
    
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
    
    int *up = upper_bound(a,a+n,e);
    cout<<"upper bound : "<<*up<<endl;
    
    int *lp = lower_bound(a,a+n,e);
    cout<<"lower bound : "<<*lp<<endl;

    return 0;
}