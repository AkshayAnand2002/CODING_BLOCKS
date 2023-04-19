Take an input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.

Input Format
First line contains integer n as size of array. Next n lines contains a single integer as element of array.

Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000

Output Format
Print the required output.

Sample Input
4
2
8
6
4
Sample Output
8
Explanation
Arrays= {2, 8, 6, 4} => Max value = 8 .
-------------------------------------------------------
#include<iostream>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
void maxvalue(int arr[],int n){
	int max=INT_MIN;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<arr[n-1];
}
int main() {
	int a[1000];
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	maxvalue(a,t);
	return 0;
}
