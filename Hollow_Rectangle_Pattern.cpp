#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C,R;
    cout<<"Enter Rows Size: ";
    cin>>R;
    cout<<"Enter Columns Size: ";
    cin>>C;
    for (int i = 1; i <= R; i++)
    {
       for (int j = 1; j <= C; j++)
       {
          if(i==1 || j==1 || i==R ||j==C)
          {
              cout<<"*";
          }
          else
          {
              cout<<" ";
          }
       }
       cout<<endl;
    }
    
    return 0;
}