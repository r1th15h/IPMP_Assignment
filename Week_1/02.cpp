#include<bits/stdc++.h>
using namespace std;

int getOddOccurrenceOpt(vector<int>& arr) {
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}

int getOddOccurrence(vector<int>& arr) {
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        if(it.second % 2 != 0 ) return it.first;
    }
    return -1;
}