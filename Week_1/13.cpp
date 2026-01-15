#include<bits/stdc++.h>
using namespace std;

void segregateEvenOdd(vector<int>& arr) {
    int ind = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] % 2 == 0){
            swap(arr[i],arr[ind]);
            ind++;
        }
    }
    sort(arr.begin(),arr.begin()+ind);
    sort(arr.begin()+ind,arr.end());
    return;
}