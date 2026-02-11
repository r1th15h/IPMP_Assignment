#include<bits/stdc++.h>
using namespace std;

bool subArrayExists(vector<int>& arr) {
    int n = arr.size();
    int sum = 0;
    unordered_map<int,int>m;
    m[0] = 1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(m.find(sum)!=m.end()) return true;
        m[sum] = i;
    }
    return false;
}