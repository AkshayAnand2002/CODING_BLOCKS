Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
-------------------------------------------------------
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string first=strs[0];
        string last=strs[n-1];
        int i;
        for(i=0;i<first.size();i++){
            if(first[i] != last[i]){
                break;
            }
        }
        if(i==0){
            return "";
        }
        else{
            return first.substr(0,i);
        }
    }
};
---------------------------------------------------------------------------------
#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
string lcp(string arr[],int n){
    if(n==0){
        return "";
    }
    else if(n==1){
        return arr[0];
    }
    sort(arr,arr+n);
    string first=arr[0];
    string last=arr[n-1];
    int i;
    for(i=0;i<first.length();i++){
        if(first[i] != last[i]){
            break;
        }
    }
    if(i==0){
        return "";
    }
    else{
        return first.substr(0,i);
    }
}
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcp(arr,n)<<endl;
    return 0;
}
