#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& a,int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int ans = 1;
    vector<int>arr(n);
    arr[0] = 1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) arr[i] = arr[i-1] + 1;
        else arr[i] = 1;
        ans = max(ans,arr[i]);
    }
    vector<int>left(n),right(n);
    left[0] = 1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) left[i] = left[i-1] + 1;
        else left[i] = 1;
    }
    right[n-1] = 1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]) right[i] = right[i+1] + 1;
        else right[i] = 1;
    }
    for(int i=1;i<n-1;i++){
        if(a[i-1] < a[i+1]){
            ans = max(ans,left[i-1] + right[i+1]);
        }
    }
    cout<<ans<<endl;
}

int main(){
    vector<int>nums = {1,2,5,3,7};
    solve(nums,nums.size());
    return 0;
}
