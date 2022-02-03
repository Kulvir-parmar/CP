#include<iostream>
using namespace std;

// to find the smallest element in the given rotated array
//                        |
//  6 , 7 , 9 , 15 , 19 , 2 , 3

int rotations(int arr[], int size){
    int left=0;
    int right=size-1;
    int mid;
    while(left<right){
        mid = left + (right-left)/2;

        // if the mid element is greater than its next element then mid+1 element is the smallest
        // This point would be the point of change. From higher to lower value.
        if (arr[mid] > arr[mid + 1]) return mid + 1;
        // if the mid element is lesser than its previous element then mid element is the smallest
        if (arr[mid - 1] > arr[mid]) return mid;

        if(arr[mid]>arr[0]) left=mid+1;
        if(arr[mid]<arr[0]) right=mid-1;
    }
    return mid;
}

int main(){
    int arr[]={6 , 7 , 9 , 15 , 19 , 2 , 3};

    int size = sizeof(arr)/sizeof(arr[0]);
    int index = rotations(arr,size);
    int smallest = arr[rotations(arr,size)];
    cout<<"Smallest element is : "<<smallest<<"\n";
    cout<<"No of rotations are equal to : "<<index<<"\n";
}