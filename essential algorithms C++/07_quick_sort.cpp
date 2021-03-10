/* 
QuickSort Algorithm 

Algorithm :
Step 1: Consider any elements as pivot, in this case I have taken last element as pivot

Step 2: Now we have to sort in such a manner that all the elements on the left side of this pivot
are less than or equal to pivot & all the elements on the right side greater than pivot

Step 3: Use 2 variables which will point to the first and last element of the array

Step 4: now if an element from the begining is less than pivot, increment the position of first variable & swap the elements of initial & next element to initial 

Step 5: Now, pivot stands at its right position

Step 6: Repeat these steps for left & right partition of array elements by recursively calling them in QuickSort function

Here are some videos for better understanding: 

https://youtu.be/MZaf_9IZCrc

https://youtu.be/0SkOjNaO1XY

Time Complexity : 

Average or Best Case - O(nlogn)
Worst Case - O(n^2)

*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std; 

int partition (int arr[], int l, int r) 
{ 
    int pivot = arr[r];  
    int i = (l - 1);
 
    for (int j = l; j <= r - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[r]); 
    return (i + 1); 
} 
 
void quickSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int pivot = partition(arr, l, r); 
        quickSort(arr, l, pivot - 1); 
        quickSort(arr, pivot + 1, r); 
    } 
}  
 
int main() 
{ 
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1); 

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    //cout << endl; 
    return 0; 
} 
 