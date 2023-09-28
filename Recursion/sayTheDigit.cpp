#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){
    if(n==0){
        return;
    }
    int lastDigit = n%10;
    n=n/10;
    // cout<<arr[lastDigit]<<" "; instead of printing four one two it will print two one four 
    sayDigit(n,arr);//recursive call for rest of the number except the last digit
    cout<<arr[lastDigit]<<" "; //comparing the digit with array value and return the value After completing all the recursive call then it will print the values else it will print in reverse way
                               
}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero", "one","two","three","four","five","six","seven","eight","nine"};
    
    sayDigit(n,arr);
}