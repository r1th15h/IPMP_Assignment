#include<bits/stdc++.h>
using namespace std;

vector<int> getMinMax(vector<int> &arr) {
    int mini = arr[0] , maxi = arr[0];
    for(int i=1;i<arr.size();i++){
        maxi = max(maxi,arr[i]);
        mini = min(mini,arr[i]);
    }
    return {mini,maxi};
}