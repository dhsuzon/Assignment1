#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a , a+n,greater<int>());
    int m;
    cin>>m;
    int b[m];
   for(int i = 0; i<m; i++)
   {
     cin>>b[i];
   }
   sort(b, b+m,greater<int>());
    a[n] = INT_MIN;
    b[m] = INT_MIN;
    
    int c[n+m];
    int lp = 0, rp = 0;
    for(int i = 0; i<n+m; i++)
    {
        if(a[lp] >= b[rp])
        {
            c[i] = a[lp];
            lp++;
        }
        else
        {
            c[i] = b[rp];
            rp++;
        }
    }
    for(int i = 0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}