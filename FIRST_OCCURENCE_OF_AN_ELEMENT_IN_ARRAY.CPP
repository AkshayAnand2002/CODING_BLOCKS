#include <iostream>
using namespace std;
int firstoccurence(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int i=firstoccurence(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
int main()
{
    int a[]={1,1,6,3,4,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<firstoccurence(a,n,7);
    return 0;
}
