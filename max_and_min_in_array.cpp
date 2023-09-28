#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[],int n){
    int temp;
    temp = arr[0];
    for(int i=0;i<n-1;i++){
        if(temp<=arr[i+1]){
            temp = arr[i+1];
        }
    }
    return temp;
}

int findMin(int arr[],int n){
    int temp;
    temp = arr[0];
    for(int i=0;i<n-1;i++){
        if(temp>=arr[i+1]){
            temp = arr[i+1];
        }
    }
    return temp;
}

int main(){
    int arr[] = {12,0,455,1,77,34,800};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The largest element is "<<findMax(arr,n)<<endl;
    cout<<"The smallest element is "<<findMin(arr,n);
    return 0;
}
