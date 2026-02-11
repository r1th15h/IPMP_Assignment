#include<bits/stdc++.h>
using namespace std;

int getCount(vector<int>& n,int k){
    if(k<0) return 0;
    int r=0,l=0,c=0,mainc=0;
    while(r<n.size()){
        if(n[r]&1) c++;
        while(c>k){
            if(n[l]%2==1) c--;
            l++;
        }
        mainc+=(r-l+1);
        r++;
    }
    return mainc;
}
int numberOfSubarrays(vector<int>& nums, int k) {
    int num1 = getCount(nums,k);
    int num2 = getCount(nums,k-1);
    return num1-num2;
}