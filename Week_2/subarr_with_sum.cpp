#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int> &arr, int target) {
    unordered_map<int,int>m;
    m[0] = -1;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        int need = sum-target;
        if(m.find(need)!=m.end()){
            return vector<int>{m[need]+2,i+1};
        }
        if(m.find(sum)==m.end()) m[sum] = i;
    }
    return vector<int>{-1};
}