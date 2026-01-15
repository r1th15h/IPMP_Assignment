#include<bits/stdc++.h>
using namespace std;

int repeatedNumber(const vector<int> &A) {
   int ele1 = -1,ele2 = -1, c1 = 0, c2 = 0;
    for(auto it:A){
        if(c1==0 && it!=ele2){
           c1=1;
           ele1 = it;
        }
        else if(c2==0 && it!=ele1){
            c2=1;
            ele2 = it;
        }
        else if(it==ele1) c1++;
        else if(it==ele2) c2++;
        else{
            c1--;
            c2--;
        }
    }
    c1=0,c2=0;
    for(auto it:A){
        if(it==ele1) c1++;
        else if(it==ele2) c2++;
    }
    if(c1>A.size()/3) return ele1;
    if(c2>A.size()/3) return ele2;
    return -1;
}