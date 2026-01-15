#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int>& arr) {
        int n = arr.size();
        int ind0 = 0;
        int ind2 = n-1;
        int i = 0;
        while(i<=ind2){
            if(arr[i]==0){
                swap(arr[i],arr[ind0]);
                ind0++;
                i++;
            }
            else if(arr[i]==1) i++;
            else if(arr[i]==2){
                swap(arr[i],arr[ind2]);
                ind2--;
            }
        }
        return;
    }