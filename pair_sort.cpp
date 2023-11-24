// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    pair<int,int> p[3];
    
    cout<<"---Insert---"<<endl;
    for(int i=0;i<3;i++)
    {
        int x,y;
        
        cout<<"enter first and second element : ";
        cin>>x>>y;
        
        p[i]=make_pair(x,y);
    }
    
    cout<<"---display---"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    
    cout<<"---After Sorting---"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(p[i].first>p[j].first)
            {
                swap(p[i],p[j]);
            }
        }
    }
    
    cout<<"---display---"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    
    return 0;
}