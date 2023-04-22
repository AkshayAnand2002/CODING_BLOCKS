/*
Given the array nums consisting of 2n elements in the form [x1,x2,…,xn,y1,y2,…,yn].
Return the array in the form [x1,y1,x2,y2,…,xn,yn].
Input Format
First line contains integer n. Next line contains 2*n integers denoting elements of array
Constraints
1 <= n <= 500
nums.length == 2n
1 <= nums[i] <= 10^3
Output Format
Formatted array
Sample Input
3
2 5 1 3 4 7
Sample Output
2 3 5 4 1 7
Explanation
Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[2*n],arr2[2*n];
    for(int i=0;i<(2*n);i++){
        cin>>arr1[i];
    }
    int i=0,j=n,k=0;
    while(i<n){
        arr2[k++]=arr1[i++];
        arr2[k++]=arr1[j++];
    }
    for(int i=0;i<(2*n);i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
