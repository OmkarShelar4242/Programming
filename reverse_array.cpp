#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12,45,3,21,22,95,6};
    int n;
    int temp;
    n = sizeof(arr)/sizeof(arr[0]);
    int start, end;
    start = 0;
    end = n-1;
    do{
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start + 1;
        end = end - 1;
    }while(start<=end);
    cout<<"reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
