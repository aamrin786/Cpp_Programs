#include <iostream>
#include<bits/stdc++.h>

using namespace std;

string infixToPrefix(string s){
    unordered_map<char,int>mp;
    stack<char>st;
    string str="";
    
    
    reverse(s.begin(),s.end());
    int n = s.size();
    
    mp['^']=3;
    mp['*']=2;
    mp['/']=2;
    mp['+']=1;
    mp['-']=1;
    for(int i=0;i<n;i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
            str+=s[i];
        }
        if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty()&&st.top()!=')'){
                str+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
            while(!st.empty()&& mp[st.top()]>mp[s[i]]){
                str+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        str+=st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
    
    
}

int main()
{
    string s;
    cin>>s;
    cout<<"Infix expression is :"<<s<<endl;
    cout<<"Prefix expression is: "<<infixToPrefix(s)<<endl;
}


