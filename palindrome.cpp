#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string S)
{
    int n= S.length();
    for(int i=0;i<n/2;i++)
    {
          if(S[i]!=S[n-i-1])
          return false;
    }
    return true;
}
int main()
{
 string S = "abclba";
 if(isPalindrome(S))
 {
    cout<<"is Palindrome";
 }
 else
 cout<<"Not Palindrome";
}