/*
Merge Sort  (Divide & Conquer Strategy) 

1. Divide the array into sub-parts until the last unit.
2. Then keep comparing & sorting the adjacent elements.
3. Keep repeating step 2 until we get the complete sorted array.

Example for better representation:

             [7  8  1  3  4  5  10  2]  
               /                     \
       [7  8  1  3]                 [4  5  10  2] 
       /          \                  /          \
    [7 8]         [1 3]           [4 5]         [10 2]
    /   \         /   \           /   \         /    \
   [7]  [8]      [1]   [3]      [4]   [5]     [10]   [2]
    \   /         \   /          \    /         \    /
    [7 8]         [1 3]           [4 5]         [2 10]
        \         /                  \          /
       [1  3  7  8]                  [2  4  5  10]
               \                     /
             [1  2  3  4  5  7  8  10]

Time Complexity : O(nlogn) for best, worst & average cases.

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int a[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int x[n1];
    int y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        y[i]=a[mid + 1 +i];
    }
    int i=0,j=0,k=l;
    while(i < n1 && j < n2){
        if(x[i]<=y[j]){
            a[k]=x[i];
            i++;
        }
        else{
            a[k]=y[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=x[i];
        k++; 
        i++;
    }
    while(j<n2){
        a[k]=y[j];
        k++; 
        j++;
    }
}

void mergeSort(int a[], int l, int r){

    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    else{
        return;
    }
    

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n;i++){
        cin>>a[i];
    }
    mergeSort(a, 0, n-1);
    for(int i =0; i<n;i++){
        cout<<a[i];
        cout<<"\t";
    }
    return 0;

}