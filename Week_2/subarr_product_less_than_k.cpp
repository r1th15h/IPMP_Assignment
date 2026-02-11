#include<bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    if(k<=1) return 0;
    int l=0,r=0;
    long long c=0,p=1;
    while(r<nums.size()){
        p*=nums[r];
        while(p>=k){
            p=p/nums[l];
            l++;
        }
        c+=(r-l+1);
        r++;
    }
    return c;
}