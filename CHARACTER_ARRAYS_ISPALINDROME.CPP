#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char arr[]){
	int len=strlen(arr);
	int i=0;
	while(i<len){
		if(arr[i] != arr[len-1]){
			return false;
		}
		i++;
		len--;
	}
	return true;
}
int main() {
	char a[1000];
	cin>>a;
	if(ispalindrome(a)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
