#include<bits/stdc++.h>
using namespace std;

// to find the peak element in a array which first increasing and then decreasing.

// ->    ->    ->  |   <-   <-    <-  
// 2, 3, 4, 6, 9, 12, 11, 8, 6, 4, 1

int peak(int arr[],int size){
    int left = 0;
    int right=size-1;
    int mid;
    while(left<=right){
        mid=left+(right-left)/2;
        // if the middle element is greater than next element and is also greater than previous then its peak.
        if(arr[mid+1]<arr[mid] && arr[mid]>arr[mid-1]) return mid;
        // if the middle element is smaller than previous then right side array is decreasing one and peak will be only on left side.
        if(arr[mid-1]> arr[mid]) right=mid-1;
        // if the middle element is smaller than next then right side array is increasing one and peak will be only on right side.
        if(arr[mid]<arr[mid+1]) left=mid+1;
        cout<<"mid is: "<<mid<<endl;
    }
    return mid;
} 

int main(){ 
    int arr[]={1, 3,78,11};
    int index = peak(arr,7);
    cout<<"The index of peak element is : "<<index<<endl;
}