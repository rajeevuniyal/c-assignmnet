// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

int main() {
    
    unordered_map<char,int> symbols = {
        {'[',-1},{']',1},
        {'(',-2},{')',2},
        {'{',-3},{'}',3}
    };
    
    string s;
    
    cout<<"enter string : "<<endl;
    cin>>s;
    
    stack<char> st;
    
    for(char bracket:s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        }
        
        else
        {
            if(st.empty())
            {
                cout<<"No";
            }
            
            else
            {
                char top = st.top();
                st.pop();
                
                if(symbols[top]+symbols[bracket]!=0)
                {
                    cout<<"No";
                }
            }
        }
    }
    
    if(st.empty())
    {
        cout<<"Yes";
    }
    
    else
    {
        cout<<"No";
    }

    return 0;
}