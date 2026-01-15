#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int>ans;
    int l=0, r=0;
    while(l<a.size() && r<b.size()){
        if(a[l]<b[r]){
            ans.push_back(a[l]);
            int temp = a[l];
            while(l < a.size() && a[l] == temp) l++;
        }
        else if(a[l]>b[r]){
            ans.push_back(b[r]);
            int temp = b[r];
            while(r < b.size() && b[r] == temp) r++;
        }
        else{
            ans.push_back(a[l]);
            int temp = a[l];
            while(l < a.size() && a[l] == temp) l++;
            while(r < b.size() && b[r] == temp) r++;
        }
    }
    while(l<a.size()){
        ans.push_back(a[l]);
        int temp = a[l];
        while(l < a.size() && a[l] == temp) l++;
    } 
    while(r<b.size()){
        ans.push_back(b[r]);
        int temp = b[r];
        while(r < b.size() && b[r] == temp) r++;
    } 
    return ans;
}

vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int>ans;
    int l=0, r=0;
    while(l<a.size() && r<b.size()){
        if(a[l]==b[r]){
                ans.push_back(a[l]);
            int temp = a[l];
            while(l < a.size() && a[l] == temp) l++;
            while(r < b.size() && b[r] == temp) r++;
        }
        else if(a[l]<b[r]){
            int temp = a[l];
            while(l < a.size() && a[l] == temp) l++;
        }
        else{
            int temp = b[r];
            while(r < b.size() && b[r] == temp) r++;
        }
    }
    return ans;
}