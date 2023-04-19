#include<iostream>
#include<cmath>
using namespace std;
int noofdigits(long long int n){
	int order=0;
	while(n!=0){
		n=n/10;
		++order;
	}
	return order;
}
void is_armstrong(long long int n){
	int order=noofdigits(n);
	long long int num=0;
	long int temp=n;
	while(temp !=0){
		int rem=temp%10;
		num+=pow(rem,order);
		temp=temp/10;
	}
	if(n==num){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
int main() {
	long long int n;
	cin>>n;
	is_armstrong(n);
	return 0;
}
