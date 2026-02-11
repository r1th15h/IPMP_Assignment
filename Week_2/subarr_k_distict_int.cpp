#include<bits/stdc++.h>
using namespace std;

int getCount(vector<int>& nums,int k){
    if(k<0) return 0;
    unordered_map<int,int>m;
    int l=0,r=0,c=0;
    while(r<nums.size()){
        m[nums[r]]++;
        while(m.size()>k){
            m[nums[l]]--;
            if(m[nums[l]]==0) m.erase(nums[l]);
            l++;
        }
        c+=(r-l+1);
        r++;
    }
    return c;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
    int num1 = getCount(nums,k);
    int num2 = getCount(nums,k-1);
    return num1-num2;

}