#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int left, int right, int search)
{
   if (left <= right) 
   {
      int mid = (left + right) / 2 ;
      
      if (arr[mid]==search)
      
        return mid;
      
      if (arr[mid] > search)
      
        return binarySearch(arr, left, mid-1, search);
      
      if (arr[mid] < search)
      
        return binarySearch(arr, mid+1, right, search);
   }
   return -1;
}

int main ()
{
    int n; //size of array
    cin>>n;
    int i,arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int search;
    cin>>search ; //number to search 
    
    int result = binarySearch (arr,0,n-1,search);
    if (result==-1)
    cout<<"number is not present";
    else
    cout<<result; // to print the index of found element 
    
    return 0;
}
