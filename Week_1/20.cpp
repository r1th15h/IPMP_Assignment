#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    if(x<0) return false;
    long long rev=0;
    int temp = x;
    while(temp){
        int dig = temp%10;
        rev = rev*10+dig;
        temp/=10;
    }
    return rev == x;
}