#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int factorialBaseCase = factorial(n-1);
    int fact= n*factorialBaseCase;
    return fact;
}

int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<< ans<<endl;
}