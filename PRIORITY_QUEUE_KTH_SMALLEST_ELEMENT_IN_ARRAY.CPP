//KTH SMALLEST ELEMENT IN ARRAY
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int a[],int l,int r,int k){
    priority_queue<int>maxh;
    for(int i=l;i<=r;i++){
        maxh.push(a[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    return maxh.top();
}
int main()
{   
    int arr[]={0,23,9,44};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    cout<<kthsmallest(arr,0,n-1,k)<<endl;
    return 0;
}
