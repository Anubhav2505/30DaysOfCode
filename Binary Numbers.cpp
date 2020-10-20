#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int count=0,min=0;
     while(n>0)
            {
            
            if(n%2==1)
                {
                
                count++; 
                  if(count>=min)
                   {
                     min=count;
                   }
                }
            else
                {
                 count=0;
                 }
                  n=n/2;
           
        }
        cout<<min;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}
