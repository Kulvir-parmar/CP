#include<bits/stdc++.h>
using namespace std;

// to check if the squre root of the given number is an integer or not in log2(n) time complexity.
int rootCheck(int x,int left,int right){
    int mid = left + ((right-left)/2);
    if(right>=left){
        if ((mid*mid) ==x) return mid;
        if((mid*mid)<x) return rootCheck(x, mid+1,right);
        if((mid*mid)>x) return rootCheck(x, left,mid-1);
    }
    return -1;
}
int main(){
    int x =4;
    int right = x;
    int index = rootCheck(x,1,x);
    cout<<"Root of given number is: "<<index<<"\n";
}