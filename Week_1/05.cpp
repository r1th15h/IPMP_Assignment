#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]<0) nums[i] = 0;
    }
    for(int i=0;i<n;i++){
        int temp = abs(nums[i])-1;
        if(temp>=0 && temp<n){
            if(nums[temp]>0) nums[temp] = -nums[temp];
            else if(nums[temp]==0) nums[temp] = -(n+1);
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=0) return i+1; 
    }
    return n+1;
}