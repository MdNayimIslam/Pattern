#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = n; j >= 1; j--)
       {
           if(j>=n-i)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
        for (int j = 1; j <= n; j++)
       {
            if(j<n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
       }
       cout<<endl;
    }
    
    

    for (int i = 0; i < n; i++)
    {
       for (int j = 1; j <= n; j++)
       {
           if(j<=n-i)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
       }
    for (int j = n; j >= 1; j--)
       {
            if(j>n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
       }
       cout<<endl;
    }

    return 0;
}