#include<bits/stdc++.h>
using namespace std;

// to search for an number which is strictly larger than given number using binary search.
//        |
// 2, 3 , 5, 6, 8, 10, 12
int largerNum(int x,int arr[],int left,int right){
    int ans=-1;
    while(left<=right){     // --> Doesn't work if the number entered is already present in an array
    // while(left<right){   // --> Works for even the numbers which are present in an array
        int mid = left + (right-left)/2;
        if(arr[mid]>=x) {
            ans=arr[mid];
            right=mid-1;
        }
        if (arr[mid]<x) left=mid+1;
    }
    return ans;
}

int main(){
    int num = 8;
    int arr[] ={2, 3 , 5, 6, 8, 10, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int right = size-1;
    int answer = largerNum(num,arr,0,right);
    cout<<"First larget element greater than num is: "<<answer<<"\n";
}
