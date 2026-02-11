#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int sum = 0;
    int maxs = INT_MIN;
    for(auto it:arr){
        sum+=it;
        maxs = max(maxs,sum);
        if(sum<0) sum=0;
    }
    return maxs;
}