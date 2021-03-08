/*
Question: Sort an Array using Insertion Sort

How it works:
arr[7]=1 0 3 2 10 4 5
Sorting Algorithm:
Pass 1: 1 | 0 3 2 10 4 5
Pass 2: 0 1 | 3 2 10 4 5
Pass 3: 0 1 3 | 2 10 4 5
Pass 4: 0 1 2 3 | 10 4 5
Pass 5: 0 1 2 3 10 | 4 5
Pass 6: 0 1 2 3 4 10 | 5
Pass 7: 0 1 2 3 4 5 10 

Time Complexity: O(n^2) (Worst Case), Best Case: O(n)
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){
    int n, key,j;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        key = a[i];
        j=i-1;
        while(a[j]>key && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0; i<n;i++){
        cout << a[i];
        cout << "\t";
    }

}