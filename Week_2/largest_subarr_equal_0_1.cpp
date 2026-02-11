#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &arr) {
    int n = arr.size();
    unordered_map<int, int> m;
    int sum = 0;
    int maxi = 0;
    m[0] = -1; 
    for(int i=0;i<n;i++){
        sum += arr[i]==0 ? -1 : 1;
        if(m.find(sum) != m.end()){
            maxi = max(maxi,i-m[sum]);
        } 
        else{
            m[sum] = i;
        }
    }
    return maxi;
}