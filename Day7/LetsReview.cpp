#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,l;
   cin>>n;
  
   for(int i=0;i<n;i++)
   { string s;
      cin>>s;
       l=s.length();
       for(int j=0;j<l;j++)
       { if(j%2==0)
           cout<<s[j];
       }
       cout<<" ";
       for(int j=0;j<l;j++)
       {
           if(j%2==1)
           cout<<s[j];
       }
     cout<<endl;
   }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
