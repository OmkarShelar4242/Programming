#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}

void selectionSort(int arr[],int n){
    int min_idx;
    int temp;
    for(int i=0;i<n-1;i++){
        min_idx = i;
        // find the index
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            swap(arr[i],arr[min_idx]);
        }
    }
}

int kthSmallest(int arr[],int n,int k){
    int element;
    element = arr[k-1];
    return element;
}

int main(){
    int arr[] = {33,45,12,97,21,58};
    int n,k;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter k = ";
    cin>>k;
    selectionSort(arr,n);
    printArray(arr,n);
    cout<<endl;
    cout<<"K'th smallest element is "<<kthSmallest(arr,n,k);
    return 0;
}
