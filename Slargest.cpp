#include<bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[],int n)
{
    int Slargest = INT_MIN;
    int Largest = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                 Slargest = Largest;
                Largest = arr[j];
               
            }
        }
    }
    return Slargest;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<SecondLargest(arr,n);
  
}