/*
Solution by Prathamesh Kandpal
contact me: prathamesh-kandpal.github.io
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, i=0;
    cout<<"Enter the size of your array: \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements: \n";
    for(i;i<size;i++){
        cin>>arr[i];
    }
    int min=arr[size];
    int max=arr[0];
    for(int j=0;j<size;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    cout<<"The smallest element is: "<<min<<" and the largest element is: "<<max;

    return 0;
}