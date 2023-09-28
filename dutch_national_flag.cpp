#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
}

void dutchSort(int arr[],int n){
    int l,m,h;
    l=0;
    m=0;
    h=n-1;
    while(m<=h){
        switch(arr[m]){
            case 0:
                swap(arr[l++],arr[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(arr[m],arr[h--]);
                break;
        }
    }
}

int main(){
    int arr[] = {0,2,2,1,1,1,1,0,0,1,2,1,2,0,2,0,1,1};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
    dutchSort(arr,n);
    cout<<"The Dutch sorted array is ";
    printArray(arr,n);
    return 0;
}
