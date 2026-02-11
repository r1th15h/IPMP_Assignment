#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& arr) {
    int n = arr.size();
    vector<int>suff(n);
    vector<int>res(n);
    int prod = 1;
    for(int i=n-1;i>=0;i--){
        prod*=arr[i];
        suff[i] = prod;
    }
    prod = 1;
    for(int i=0;i<n-1;i++){
        res[i] = prod*suff[i+1];
        prod*=arr[i];
    }
    res[n-1] = prod;
    return res;
}