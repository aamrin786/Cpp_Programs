/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false*/
                                        //MY LOGIC

/*Here the char that need to be rotated(i.e first char of the string as it's left rotation) is stored in temp
rest are adding to the last of the string this process is continuing untill matches with goal*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string goal;
    cin>>goal;
        
        string ans;
        int j=0;
        int flag=0;
        if(s.length()!=goal.length()){
            return false;
        }
        while(j<goal.length()){ //here goal length taken as length of s become constant all the time and infinite loop will be created
            char temp=s[0]; //first char stored
        for(int i=1;i<s.length();i++){
            ans+=s[i];

        }
        ans+=temp; //adding the stored char at the last
         cout<<ans<<endl;
        if(ans==goal){
            flag=1;
            break;
        }
       
        j++;
        s=ans; //updating s with the newly rotated string
        ans=""; // updating ans with empty string as next rotation is going to take place
        }
        if(flag==1){
            cout<<true;
        }
        else{
            cout<<false;
        }
        return 0;
}