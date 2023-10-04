#include<bits/stdc++.h>
using namespace std;
  string infixToPostfix(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        stack<char>st;
        string str="";
        
        mp['^']=3;
        mp['*']=2;
        mp['/']=2;
        mp['+']=1;
        mp['-']=1;
        
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
                str+=s[i];
            }
//Handling the parenthesis
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.top()!='(' ){
                str+=st.top();
                st.pop();
            }
            st.pop();
        }

// handling the expressions w/o characters and parenthesis
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
            while( !st.empty()&&mp[st.top()]>=mp[s[i]]){
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
        return str;
    }
