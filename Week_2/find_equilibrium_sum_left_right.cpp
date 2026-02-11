#include<bits/stdc++.h>
using namespace std;

int findEquilibrium(vector<int> &arr) {
    int n = arr.size();
    int sum = 0;
    for(auto it:arr) sum+=it;
    int currsum = 0;
    for(int i=0;i<n;i++){
        sum-=arr[i];
        if(currsum==sum) return i;
        currsum+=arr[i];
    }
    return -1;
}