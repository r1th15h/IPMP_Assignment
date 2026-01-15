#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A){
    long long n = A.size();
    long long sum = 0,sqsum=0;
    for(auto it:A){
        sum+=it;
        sqsum += 1LL*it*it;
    }
    long long expectedSum = (n)*(n+1)/2;
    long long SqexpectedSum = n*(n+1)*(2*n+1)/6;
    long long S = sum - expectedSum;                
    long long Sq = sqsum - SqexpectedSum;  
    long long a = (S + Sq / S) / 2;              
    long long b = a - S;    
    return {(int)a,(int)b};
}