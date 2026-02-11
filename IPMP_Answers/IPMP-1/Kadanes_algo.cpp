#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxc = INT_MIN;
    int c=0;
    for(auto it:nums){
        c+=it;
        maxc = max(maxc,c);
        if(c<0){
            c=0;
        }
    }
    return maxc;
}
