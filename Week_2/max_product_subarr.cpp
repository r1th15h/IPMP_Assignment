#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &arr) {
    int n = arr.size();
    int leftmax = INT_MIN;
    int rightmax = INT_MIN;
    int left = 1;
    int right = 1;
    for(int i=0;i<n;i++){
        left *= arr[i];
        leftmax = max(leftmax,left);
        if(left == 0){
            left = 1;
        }
    }
    for(int i=n-1;i>=0;i--){
        right *= arr[i];
        rightmax = max(rightmax,right);
        if(right == 0){
            right = 1;
        }
    }
    return max(leftmax,rightmax);
}