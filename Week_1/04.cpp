#include<bits/stdc++.h>
using namespace std;

int missingNum(vector<int>& arr) {
    long long sum = 0;
    int n = arr.size();
    long long expect = (1LL*(n+1)*(n+2))/2;
    for(auto it:arr){
        sum+=it;
    }
    return expect-sum;
}