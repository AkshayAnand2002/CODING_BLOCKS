Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format

Single Character .

Constraints

Output Format

lowercase UPPERCASE Invalid

Sample Input

$

Sample Output

Invalid
----------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main() {
	char x;
	cin>>x;
	if(x>=65 && x<=90){
		cout<<"UPPERCASE"<<endl;
	}
	else if(x>=97 && x<=122){
		cout<<"lowercase"<<endl;
	}
	else{
		cout<<"Invalid"<<endl;
	}
	return 0;
}
