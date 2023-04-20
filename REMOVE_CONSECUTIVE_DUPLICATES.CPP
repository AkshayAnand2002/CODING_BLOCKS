Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
----------------------------------------------------------------
#include<iostream>
using namespace std;
void rd(char arr[]){
	for(int i=0;arr[i] !='\0';){
		char ch=arr[i];
		int freq=0;
		while(arr[i] == ch){
			freq++;
			if(freq==1){
				cout<<ch;
			}
			i++;
		}
	}
}
int main() {
	char a[1000];
	cin>>a;
	rd(a);
	return 0;
}
