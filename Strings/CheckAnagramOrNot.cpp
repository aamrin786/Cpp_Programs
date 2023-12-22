/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true*/


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

   /* Approach: Sort both the string and compare each and every letter of both strings. 
   If all letters matched then, print true. Otherwise, print false.*/


