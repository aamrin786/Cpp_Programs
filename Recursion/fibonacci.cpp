#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0){ //base condition
        return 0;
    }
    if(n==1){  //base condition
        return 1;
    }
    int res = fib(n-1)+fib(n-2); //recursive condition
    return res;
}
int main(){
    int n;
    cin>>n;
    int ans = fib(n);
    cout<<ans;

}