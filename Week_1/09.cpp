#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumOpt(vector<int>& arr) {
    int x = 0;
    for(auto it:arr){
        x^=it;
    }
    int setbit = (x) & (-x);
    vector<int>ans(2,0);
    for(auto it:arr){
        if(it & setbit){
            ans[0]^=it;
        }
        else{
            ans[1]^=it;
        }
    }
    if(ans[0]>ans[1]) swap(ans[0],ans[1]);
    return ans;
}