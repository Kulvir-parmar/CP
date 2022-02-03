#include<bits/stdc++.h>
using namespace std;

// to find the square root of a given number upto the given precision. 

float root(int x, double eps){
    double left=0;
    double right=x;
    while((right-left)>eps){
        double mid = left+(right-left)/2;
        if((mid*mid)>x) right=mid;
        if((mid*mid)<x) left=mid;
        if((mid*mid)==x) return mid;
    }
    return left+(right-left)/2;
}
int main(){
    double x=2;
    double eps =10e-5;
    double sqrRoot = root(x,eps);
    cout<<"The root of the number is : "<<setprecision(3)<<sqrRoot<<"\n";
}