#include <bits/stdc++.h>

using namespace std;

bool kSet(int n, int k){
    if(n&(1<<(k-1))!=0)    return true;
    else    return false;
}

void printNums(int n){
    if(n==0)    return;
    else{
        cout << n << " ";
        printNums(n-1);
         cout << n << " ";
    }
}
