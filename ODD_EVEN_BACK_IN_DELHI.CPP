Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

Input Format
The first line contains N , then N integers follow each denoting the number of the car.

Constraints
N<=1000 Car No >=0 && Car No <=1000000000

Output Format
N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !

Sample Input
2
12345
12134
Sample Output
Yes
No
Explanation
1 + 3 + 5 = 9 which is divisible by 3
1 + 1 + 3 = 5 which is NOT divisible by 3 and 2+4 = 6 which is not divisble by 4.
--------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
void odd_even(int nos){
	int evensum=0;
	int oddsum=0;
	while(nos != 0){
			int rem=nos%10;
			if(rem%2==0){
				evensum+=rem;
			}
			else{
				oddsum+=rem;
			}
			nos=nos/10;
		}
		if(evensum%4==0 || oddsum%3==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
}
int main() {
	int t,no;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>no;
		odd_even(no);
	}
}
