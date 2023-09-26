/*Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000*/
 double power(double x, long long n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    if(n>0){
        return x*power(x,n-1);
    }
    else if(n<0){ //to handle -ve power
        int N = -1*n;
        double res= x*power(x,N-1);
        return 1/res;
    }
    return -1;
}

double myPow(double x, int n) {
    long long N=n;
    // Write Your Code Here
    double ans = power(x,N);
   return ans;
}

//Another Method
 double myPow(double x, long long n){
 if(n==0)return 1;
        if(n<0){
            n = -1*(n); //converting -ve power into +ve
            x = 1/x;
        }
        if(n%2==0){ //if it's a even power then find square and rest of the power is n/2
            return myPow(x*x, n/2);
        }
        else return x* myPow(x ,n-1); // call recursively one after another
        
}
