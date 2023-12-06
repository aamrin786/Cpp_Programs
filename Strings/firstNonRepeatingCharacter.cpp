/*The problem defined a special character of the string as the first nonrepeating character in the string.
Given a string find the special character in it.*/

/*Input
10
abcbasdasd
Testcase Output
c  */


using namespace std;
#include<bits/stdc++.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n; 
    char ch;
    string str;
    for(int i=0;i<n;i++){
      cin>>ch;
      str+=ch;
    }
    
     unordered_map<char,int>mp;
    for(int i=0;i<str.length();i++){
          mp[str[i]]++;
    }
    int flag=0;
    for(int i=0;i<str.length();i++){
      if(mp[str[i]]==1){
        cout<<str[i];
        flag=1;
        break;
      }
    }
    if(flag==0){
      cout<<"-1";
    }
    return 0;
}