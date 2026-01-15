#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int ind = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[ind],arr[i]);
            ind++;
        }
    }
    return;
}
