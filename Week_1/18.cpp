#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string columnTitle) {
    long long sum = 0;
    int n = columnTitle.size();
    for(int i=n-1;i>=0;i--){
        int charnum = columnTitle[i]-'A'+1;
        sum += charnum*pow(26,n-i-1);
    }
    return sum;
}
