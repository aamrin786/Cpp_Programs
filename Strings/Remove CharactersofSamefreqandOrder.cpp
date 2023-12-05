/*You are given a string str consisting of lowercase English alphabets only.
Your task is to remove all the characters from the string if their frequency is divisible by their order in the lowercase alphabet.*/

using namespace std;
#include<bits/stdc++.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    unordered_map<char,int>mp; //used this to determine the order of the characters
    mp['a']=1;
    mp['b']=2;
     mp['c']=3;
      mp['d']=4;
       mp['e']=5;
        mp['f']=6;
         mp['g']=7;
          mp['h']=8;
           mp['i']=9;
            mp['j']=10;
             mp['k']=11;
              mp['l']=12;
               mp['m']=13;
                mp['n']=14;
                mp['o']=15;
                 mp['p']=16;
                  mp['q']=17;
                   mp['r']=18;
                    mp['s']=19;
                     mp['t']=20;
                      mp['u']=21;
                       mp['v']=22;
                        mp['w']=23;
                         mp['x']=24;
                          mp['y']=25;
                           mp['z']=26;
     string str;    
     string res;                 
    cin>>str;
    //to store the frequency
    unordered_map<char,int>ans;
    for(int i=0;i<str.length();i++){
      ans[str[i]]++;
    }
    int n = str.length();
    for(int i=0;i<n;i++){
      if(ans[str[i]] % mp[str[i]] ==0){ //ans[str[i]] will return the value(frequency) of str[i] stored inside the map
            continue; // if divisible then simply skip the character
      }
      res+=str[i]; //rest will be added to resultant string
    }
    cout<<res;
    }

  
    
