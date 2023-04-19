#include<iostream>
#include<cmath>
using namespace std;
long long int replace(long long int n){
	long long int rem,new_num=0,place=0;
	if(n==0){
		n=5;
	}
	while(n!=0){
		rem=n%10;
		if(rem==0){
			rem=5;
		}
		n=n/10;
		new_num=new_num+rem*pow(10,place);
		place++;
	}
	return new_num;
}
int main() {
	long long int num;
	cin>>num;
	cout<<replace(num);
	return 0;
}
