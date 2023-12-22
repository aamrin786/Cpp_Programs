
#include<bits/stdc++.h>
using namespace std;

    int main() {
        string s;
        string t;
        cin>>s;
        cin>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        int n=s.length();
        int N=t.length();
        if(n<N || n>N){
            return false;
        }
        while(i<n && j<N){
            if(s[i]!=t[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
