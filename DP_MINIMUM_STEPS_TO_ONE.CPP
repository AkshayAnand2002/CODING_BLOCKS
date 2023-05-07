You are given a positive integer 'N’. Your task is to find and return the minimum number of steps that 'N' has to take to get reduced to 1.

You can perform any one of the following 3 steps:

1) Subtract 1 from it. (n = n - ­1) ,
2) If n is divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
3) If n is divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).
For example:

Given:
‘N’ = 4, it will take 2 steps to reduce it to 1, i.e., first divide it by 2 giving 2 and then subtract 1, giving 1.
Input Format:
The first line of input contains an integer ‘T’ denoting the number of test cases.

The following ‘T’ lines contain a single integer  ‘N’, denoting the number given to us.
Output Format :
For each test case, You are supposed to return an integer that denotes the minimum steps it takes to reduce the number to 1.
Note:
You are not required to print the expected output; it has already been taken care of. Just implement the function.
Constraints:
1 <= ‘T’ <= 5
1 <= ‘N’ <= 10 ^ 5

Time Limit: 1sec.
--------------------------------------------------------------------------------------------------
#include <iostream>
#include<climits>
using namespace std;
//MIN STEPS TO ONE.
//n->n/3,n/2,n-1.
int minstepstopdown(int n,int dp[]){
    //base case
    if(n==1){
        return 0;
    }
    //looking up values which are already computed.
    if(dp[n] != 0){
        return dp[n];
    }
    //below code for dp[n] not known.
    //recursive case
    int op1,op2,op3;
    op1=op2=op3=INT_MAX;
    if(n%3==0){
        op1=minstepstopdown(n/3,dp);
    }
    if(n%2==0){
        op2=minstepstopdown(n/2,dp);
    }
    op3=minstepstopdown(n-1,dp);
    int ans=min(min(op1,op2),op3)+1;
    return ans;
}
int minstepsbottomup(int n){
    int dp[100]={0};
    dp[1]=0;
    for(int i=2;i<=n;i++){
        //i is the current state.
        //dp[] array indexing starts from 1.
        int op1,op2,op3;
        op1=op2=op3=INT_MAX;
        if(n%3==0){
            op1=dp[i/3];
        }
        if(n%2==0){
            op2=dp[i/2];
        }
        op3=dp[i-1];
        dp[i]=min(min(op1,op2),op3)+1;
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int dp[100]={0};
    //cout<<minstepstopdown(n,dp);
    cout<<minstepsbottomup(n);
    return 0;
}
