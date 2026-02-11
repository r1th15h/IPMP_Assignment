#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &mat,int target){
    int n = mat.size();
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (mat[mid] == target) return true;  
        else if(target>mat[mid]) low = mid + 1;
        else high = mid - 1; 
    }
    return false;
}

bool matSearch(vector<vector<int>> &mat,int x){
    int n = mat.size();
    for(int i=0;i<n;i++){
        if(binarySearch(mat[i],x)) return true;
    }
    return false;
}
