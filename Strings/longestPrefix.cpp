/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""*/

#include<bits/stdc++.h>
using namespace std;
int main(){
        
        vector<string>strs;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>strs[i];
        }
        
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string s1= strs[0];
        string s2=strs[n-1];
        string ans="";
        int i=0;
        while(i<s1.size()&& i<s2.size()){
            if(s1[i]==s2[i]){    
                ans+=s1[i];
                 i++;                   
            }
            else{
                break;
            }
          
        }
        //cout<<s1<<endl;
        //cout<<s2<<endl;

        cout<<ans;
        
    }
