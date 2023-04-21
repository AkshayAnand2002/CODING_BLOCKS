#include<iostream>
#include<climits>
using namespace std;
int main () {
	int i,no,largest=INT_MIN;
	for(i=0;i<=4;i++){
		cin>>no;
		if(largest<no){
			largest=no;
		}
	}
	cout<<largest;
	return 0;
}
