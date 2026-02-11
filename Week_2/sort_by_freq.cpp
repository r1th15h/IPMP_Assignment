#include<bits/stdc++.h>
using namespace std;

vector<int> sortByFreq(vector<int>& arr) {
    unordered_map<int,int>m;
    priority_queue<pair<int,int>>pq;
    vector<int>ans;
    for(int it:arr){
        m[it]++;
    }
    for(auto it:m){
        pq.push({it.second,-it.first});
    }
    while(!pq.empty()){
        auto it = pq.top();
        int elem = -it.second;
        pq.pop();
        for(int i=0;i<it.first;i++){
            ans.push_back(elem);
        }
    }
    return ans;
}   