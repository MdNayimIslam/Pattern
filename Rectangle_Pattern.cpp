#include <bits/stdc++.h>
using namespace std;
int main()
{
    int C,R;
    cout<<"Enter Rows Size: ";
    cin>>R;
    cout<<"Enter Columns Size: ";
    cin>>C;
    for (int i = 0; i < R; i++)
    {
       for (int j = 0; j < C; j++)
       {
          cout<<"* ";
       }
       cout<<endl;
    }
    
    return 0;
}