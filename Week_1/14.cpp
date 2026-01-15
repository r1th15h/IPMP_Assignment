#include<bits/stdc++.h>
using namespace std;

vector<int> alternatePlacement(vector<int>& arr) {
    vector<int>neg;
    vector<int>pos;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0) neg.push_back(arr[i]);
        else pos.push_back(arr[i]);
    }
    int posc = pos.size();
    int negc = neg.size();
    int i = 0;
    while(i<posc && i<negc){
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
        i++;
    }
    while(i<posc){
        ans.push_back(pos[i]);
        i++;
    }
    while(i<negc){
        ans.push_back(neg[i]);
        i++;
    }
    return ans;
}