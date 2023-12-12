/*One day jack finds a string of characters. He is very keen to arrange the characters in reverse order, i.e., first characters become the last characters, second characters become the second-last characters, and so on. Now he wants your help  to find the kth character from the new string formed after reverse the original string.*/
/*Testcase Input
5 2
abdfa
Testcase Output
f*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string str;
    cin>>n;
     int k;
    cin>>k;

    char ch;
    for(int i=0;i<n;i++){
      cin>>ch;
      str+=ch;
    }
   
 //cout<<str;
    for(int i=0;i<n/2;i++){
      swap(str[i],str[n-i-1]);
    }

    cout<<str[k-1];

    return 0;
}  
    