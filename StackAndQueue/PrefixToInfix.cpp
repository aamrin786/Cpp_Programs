#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string prefixToInfixConversion(string &s){
	// Write your code here.
	//reverse(s.begin(),s.end());
	int n = s.size();
	string op3;
	stack<string>st;
	for(int i=n-1;i>=0;i--){
		if(s[i]>='a'&&s[i]<='z'){
			string str(1,s[i]);
			st.push(str);
		}
		else{
			string op1=st.top();
			st.pop();
			string op2=st.top();
			st.pop();
			string op3="("+op1+s[i]+op2+")";
			st.push(op3);
		}
	}
	return st.top();
}
