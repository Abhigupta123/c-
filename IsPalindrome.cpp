#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[n-i-1])
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(ispalindrome(s))
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
   
}