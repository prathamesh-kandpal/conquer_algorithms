/*
Question: Sorting an array from selection sort method (finding the minimum and placing it in the beginning, 
repeating this step until the array gets sorted in an ascending order)
Time Complexity: O(n^2)
Space Complexity: O(1) - Inplace sorting algorithm

Step by step procedure(by tutorialpoint):

Step 1 − Set MIN to location 0
Step 2 − Search the minimum element in the list
Step 3 − Swap with value at location MIN
Step 4 − Increment MIN to point to next element
Step 5 − Repeat until list is sorted
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Swapping element positions  

void swap_element(int *a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int n, min;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
            swap_element(&arr[min], &arr[i]);
        }
        
    }
    cout<<"The sorted array is: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
