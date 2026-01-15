#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber) {
    int temp = columnNumber;
    string ans = "";
    while(temp){
        temp--;
        int chars = temp%26;
        char a = chars+'A';
        ans.push_back(a); 
        temp/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}