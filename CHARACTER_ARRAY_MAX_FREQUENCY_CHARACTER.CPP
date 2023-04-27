Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
  ------------------------------------------------------
#include<iostream>
#include<cstring>
using namespace std;
void maxfreqchar(char arr[]){
	int freq[26]={0};
	for(int i=0;arr[i] !='\0';i++){
		freq[arr[i]-'a']++;
	}
	int max=0;
	for(int i=0;i<26;i++){
		if(freq[i]>max){
			max=freq[i];
		}
	}
	for(int i=0;i<26;i++){
		if(freq[i] == max){
			char x=i+'a';
			cout<<x;
		}
	}
}
int main() {
	char a[1000];
	cin>>a;
	maxfreqchar(a);
	return 0;
}
