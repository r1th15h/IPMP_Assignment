#include<bits/stdc++.h>
using namespace std;

vector<int> twoRepeated(vector<int>& arr) {
    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
        if(m[arr[i]]==2) ans.push_back(arr[i]);
    }
    return ans;
}
