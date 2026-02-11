#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int>&arr,int ind,vector<int>&dp){
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int pick = arr[ind]+getMax(arr,ind-2,dp);
    int notpick = getMax(arr,ind-1,dp);
    return dp[ind] = max(pick,notpick);
}

int findMaxSum(vector<int>& arr) {
    int n = arr.size();
    vector<int>dp(n,-1);
    return getMax(arr,n-1,dp);
}