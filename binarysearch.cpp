#include<bits/stdc++.h>
using namespace std;
int bS(int arr[],int low,int high,int target)
{
    if(low>high)
    return -1;
    
    int mid=(low+high)/2;
    if(arr[mid]==target)
    return mid;
    else if(target > arr[mid])
    bS(arr,mid+1,high,target);
    else
    bS(arr,low,mid-1,target);
}
int main()
{
    cout<<"enter size"<<endl;
    int n;
    cin>>n;
    
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter target key"<<endl;
    int t;
    cin>>t;
    sort(arr,arr+n);
    cout<<bS(arr,0,n-1,t);
   
    
}