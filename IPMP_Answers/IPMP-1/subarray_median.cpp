#include <bits/stdc++.h>
using namespace std;

priority_queue<int>maxHeap;
priority_queue<int,vector<int>,greater<int>>minHeap;
unordered_map<int,int>mpp;
int K;

void remElemFromLeft(){
    while(!maxHeap.empty()){
        int x = maxHeap.top();
        if(mpp[x]>0){
            mpp[x]--;
            maxHeap.pop();
        } 
        else break;
    }
}

void remElemFromRight(){
    while(!minHeap.empty()){
        int x = minHeap.top();
        if(mpp[x]>0){
            mpp[x]--;
            minHeap.pop();
        } 
        else break;
    }
}

void balance(){
    if((int)maxHeap.size() > (int)minHeap.size() + 1){
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        remElemFromLeft();
    }
    else if((int)maxHeap.size() < (int)minHeap.size()){
        maxHeap.push(minHeap.top());
        minHeap.pop();
        remElemFromRight();
    }
}

void addNum(int x){
    if(maxHeap.empty() || x <= maxHeap.top()) maxHeap.push(x);
    else minHeap.push(x);
    balance();
}

void removeNum(int x){
    mpp[x]++;
    if(!maxHeap.empty() && x <= maxHeap.top()) remElemFromLeft();
    else remElemFromRight();
    balance();
}

double getMedian(){
    if(K%2 == 1) return maxHeap.top();
    return (maxHeap.top() + minHeap.top())/2.0;
}

vector<double> slidingWindowMedian(vector<int>& nums,int k){
    K=k;
    vector<double>ans;
    for(int i=0;i<nums.size();i++){
        addNum(nums[i]);
        if (i>=k-1){
            ans.push_back(getMedian());
            removeNum(nums[i-k+1]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int k = 2;
    slidingWindowMedian(nums,k);
    return 0;
}

