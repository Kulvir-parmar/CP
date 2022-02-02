#include<bits/stdc++.h>
using namespace std;

// to find the smallest element in the given rotated array
//                        |
//  6 , 7 , 9 , 15 , 19 , 2 , 3

int rotations(int arr[], int left, int right){
    int mid;
    while(left<right){
        mid = left + (right-left)/2;
        if(arr[mid]>arr[right]) left=mid+1;
        if(arr[mid]<arr[right]) right=mid-1;
    }
    return mid;
}

int main(){
    int left = 0;
    int arr[]={6 , 7 , 9 , 15 , 19 , 19 , 2 , 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int right = size-1;
    int smallest = rotations(arr,left,right);
    cout<<"Index of smallest element is : "<<smallest<<"\n";
    cout<<"No of rotations are equal to : "<<size-smallest<<"\n";

} 