#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long toh(int N, int from, int to, int aux) {
        //Your code here
      long long moves=0;
        if(N==1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
        moves+=toh(N-1,from,aux,to); // every function call contains one move that's why moves+=
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        moves++;
        moves+=toh(N-1,aux,to,from);

        return moves;
}

/*Input:
N = 2
Output:
move disk 1 from rod 1 to rod 2
move disk 2 from rod 1 to rod 3
move disk 1 from rod 2 to rod 3
3*/

