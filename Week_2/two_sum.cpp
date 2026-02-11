#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int>& arr, int target) {
    unordered_map<int,int>m;
    for(auto it:arr){
        int need = target-it;
        if(m.find(need) != m.end()){
            return true;
        }
        m[it]++;
    }
    return false;
}