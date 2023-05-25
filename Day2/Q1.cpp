// C++ program to implement the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to return the length of
// the longest valid substring
int solve(string s, int n)
{
 
    // Variables for left and right counter.
    // maxlength to store the maximum length found so far
    int left = 0, right = 0, maxlength = 0;
 
    // Iterating the string from left to right
    for (int i = 0; i < n; i++)
    {
        // If "(" is encountered,
        // then left counter is incremented
        // else right counter is incremented
        if (s[i] == '(')
            left++;
        else
            right++;
 
        // Whenever left is equal to right, it signifies
        // that the subsequence is valid and
        if (left == right)
            maxlength = max(maxlength, 2 * right);
 
        // Resetting the counters when the subsequence
        // becomes invalid
        else if (right > left)
            left = right = 0;
    }
 
    left = right = 0;
 
    // Iterating the string from right to left
    for (int i = n - 1; i >= 0; i--) {
 
        // If "(" is encountered,
        // then left counter is incremented
        // else right counter is incremented
        if (s[i] == '(')
            left++;
        else
            right++;
 
        // Whenever left is equal to right, it signifies
        // that the subsequence is valid and
        if (left == right)
            maxlength = max(maxlength, 2 * left);
 
        // Resetting the counters when the subsequence
        // becomes invalid
        else if (left > right)
            left = right = 0;
    }
    return maxlength;
}
 
 
//A much shorter and concise version of the above code
int solve2(string s, int n){
    int left=0,right=0,maxlength=0,t=2;
      while(t--){
        left=0;
        right=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')left++;
            else right++;
                 
            if(left==right){
                maxlength=max(maxlength,2*left);
            }
            //when travelling from 0 to n-1   
            if(t%2==1 && right>left){
                left=0;
                right=0;
              }
              //when travelling from n-1 to 0
              if(t%2==0 && left>right){
                  left=0;
                  right=0;
              }
            }
              //now we need to do the same thing from the other side;
            reverse(s.begin(),s.end());
        }
        return maxlength;
}
 
// Driver code
int main()
{
   
    // Function call
    cout << solve(")((())))(()())", 16);
    return 0;
}