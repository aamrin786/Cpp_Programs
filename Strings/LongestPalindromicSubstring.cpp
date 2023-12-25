 /*Given a string s, return the longest palindrome
Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 */
 #include<bits/stdc++.h>
 using namespace std;
 
 int main() {
    string s;
    cin>>s;
        int n=s.length();
        string ans="";
        int maxi=1;
        int st=0;
        int end=0;

        //for even length palindrome1
        for(int i=0;i<n-1;i++){
                int l=i;
                int r=i+1;
            while(l>=0 &&r<n){
                if(s[l]==s[r]){
                    l--;
                    r++;

                }
                else{
                    break;
                }            
            }
            int len =r-l-1;
            if(maxi<len){
                maxi=len;
                st=l+1;
                //end=r-1;
            }

        }
//for odd length palindrome

//this can be done as taking l=i-1 and r=i+1 where i should be i=1

        for(int i=0;i<n-1;i++){
                int l=i;
                int r=i;
            while(l>=0 &&r<n){
                 if(s[l]==s[r]){
                    l--;
                    r++;

                }
                else{
                    break;
                }            
            }
            int len =r-l-1;
            if(maxi<len){
                maxi=len;
                st=l+1;
                //end=r-1;
            }

        }

    cout<< s.substr(st,maxi); 
    }
