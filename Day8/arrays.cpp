#include <bits/stdc++.h>

using namespace std;




int main()
{
    int n,r;
    cin >> n;
    r=n-1;
    int arr[n];
    for (int i=0;i<n;i++)
   { cin>>arr[i];
    
    }   
 
     while(r>=0)
     {
         cout<<arr[r]<<" ";
         r--;
     }   return 0;
}


