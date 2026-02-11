#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& mat) {  
    int m = mat.size();
    int n = mat[0].size();
    vector<vector<int>> res(n, vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[j][i] = mat[i][j];
        }
    }
    for(auto& row : res){
        reverse(row.begin(),row.end());
    }
    return res;
}