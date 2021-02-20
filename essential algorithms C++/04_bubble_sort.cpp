/*
Question: Sort an array using Bubble Sort

Bubble Sort is a comparison based algorithm where we compare adjacent elements and rank them in ascending order

Time Complexity: O(n^2)
Space Complexity: O(1) Inplace sorting algorithm

Step by step Procedure:

1. Swap elements if the next element is smaller than the current element
2. Repeat this procedure for all elements (size:n elements)
3. Doing so will help us in getting the largest on the last position
4. Reduce the array size by 1 so that we can sort remaining elements of the array
5. Keep passing the array through the above procedures until the size of array arrives at the first postion of our array

*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of your array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements to be sorted: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int pass = 0; 
    while(pass<size-1) //n-1 because last element will be sorted
    {
        for(int i=0;i<size-pass;i++) //i<size-pass so that we can determine the number of passes
        {
            if(arr[i]>arr[i+1]){ //Swapping elements
                swap(arr[i],arr[i+1]); //function swap
            }
        }
        pass++;
    }
    cout<<"The sorted Array is: \n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
    
}