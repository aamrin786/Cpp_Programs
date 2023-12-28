/*Problem statement
You are given a string 'str' of lowercase alphabets and an integer 'k' .
Your task is to return the count all the possible substrings that have exactly 'k' distinct characters.
Sample Input 1 :
aacfssa    
3
Sample Output 1 :
5    
Explanation of The Sample Input 1:
Given 'str' = “aacfssa”.
 We can see that the substrings with only 3 distinct characters are {aacf, acf, cfs, cfss, fssa}. */

                        //LOGIC
/*here we are creating every possible substring. we are checking the using map or hash map if the frequency of the 
element is zero then count distinct count value will be +1 whenever it equals to k ans will be incremented by 1*/

 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;

    int n=str.length();
    int i=0;
    int ans=0;
    for(int i=0;i<n;i++){
        //unordered_map<char,int>mp;
        vector<int>v(26,0); //using hash map
        int count=0;
        for(int j=i;j<n;j++){ 
            if(v[str[j]-'a']==0){ //'a' is subtracted from str[j] to convert the character str[j] to a zero-based index corresponding to the English alphabet. In other words, it maps the character 'a' to 0, 'b' to 1, 'c' to 2, and so on.
                count++;
            }
            v[str[j]-'a']++;
            // if(mp[str[j]]==0){
            //     count++;
            // }
            // mp[str[j]]++;

            if(count==k){
                ans+=1;
                
            }
            else if(count>k){
                break;
            }

        }
        //cout<<ans<<endl;
    }
    return ans;
 }