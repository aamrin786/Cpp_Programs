#include <iostream>
#include<bits/stdc++.h>

using namespace std;
 
 string postToInfix(string s) {
        // Write your code here
        stack<string>st;
      
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            string str(1,s[i]);
            st.push(str);
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string op3= "("+op2+s[i]+op1+")";
            st.push(op3);
        }
    }
    return st.top();
}

/*Input:
ab*c+ 
Output: 
((a*b)+c) */