// Peak element = Element which is not smaller than its neighboring elements.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int n){
    if(n==1){
        return 0;
    }
    if(arr[0]>=arr[1]){
        return 0;
    }
    if(arr[n-1]>=arr[n-2]){
        return n-1;
    }
    
    for(int i =0;i<n;i++){
        if(arr[i]>=arr[i-1]&&arr[i]>=arr[i+1]){
            return i;
        }
    }
}

int main(){
    int arr[] = {1,2,3,7,5,6,1};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Index of the peak element is "<<findPeak(arr,n);
    return 0;
}
