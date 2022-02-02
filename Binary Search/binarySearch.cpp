#include<bits/stdc++.h>
using namespace std;

//to check the index of the given number in the given sorted array in log2(n) time complexity

int binarySearch(int x,int arr[],int left, int right){
// int binarySearch(int x,int arr[],int size){

    // int size = sizeof(arr)/sizeof(arr[0]);
    // int left =0;
    // int right = size-1;
    while(left<=right){ 
        int mid = left + ((right-left)/2);
        if(arr[mid]==x) return mid;
        if (arr[mid]<x) left = mid+1;
        if(arr[mid]>x) right=mid-1;
    }
    // if(right>=left){
    //     if (arr[mid] ==x) return mid;
    //     if(arr[mid]<x) return binarySearch(x, arr, mid+1,right);
    //     if(arr[mid]>x) return binarySearch(x, arr, left,mid-1);
    // }
    return -1;
    
}
int main(){
    int x =7;
    int arr[]={1,5,7,10,13,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right = size-1;
    int index = binarySearch(x,arr,left,right); // --> Works
    // int index = binarySearch(x,arr);         // --> Doesn't Works
    // int index = binarySearch(x,arr,size);    // --> Works
    cout<<"Index of given element is: "<<index<<"\n";
}