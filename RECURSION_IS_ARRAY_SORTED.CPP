#include <iostream>
using namespace std;
bool issorted(int *a,int n){
    if(n==0 || n==1){
        return true;
    }
    bool issmallersorted= issorted(a+1,n-1);
    //checking for next n-1 elements by recursion.
    //it checks from index 1 and so on.
    //we need to explicitly check from index 0.
    if(issmallersorted && a[0]<a[1]){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int arr[]={1,4,6,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    bool ans=issorted(arr,n);
    if(ans==true){
        cout<<"SORTED"<<endl;
    }
    else{
        cout<<"NOT SORTED"<<endl;
    }
    return 0;
}
