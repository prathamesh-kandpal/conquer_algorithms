/*
Question:
Reverse an Array

Solution by Prathamesh Kandpal
prathamesh-kandpal.github.io
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int size, end;
	cout << "Enter the array size:\t";
	cin >> size;
	int arr[size];
	cout << "Enter the array elements:\n";
	for(int i =0;i<size;i++){
		cin>>arr[i];
		end = i;
	}
	cout << " The reversed order is:\n";
	while(end>=0){
		cout << arr[end] << "\t";
		end--;
	}
	return 0;
}

