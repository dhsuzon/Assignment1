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
    sort(a,a+n);
    int x;
    cin>>x;
    int flag = 0;
    int l = 0;
    int mid;
    int r = n - 1;
    while(l<=r)
    {
         mid = (l+r)/2;
        if(a[mid] == x)
        {
            flag = 1;
            break;
            
            
        }
        else if  ( x > a[mid])
       {
         l = mid+1;
       }
       else
       {
          r = mid - 1;
       } 
       
      flag  = 0; 
      
    }
    if(flag == 0)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<mid;
    }
    return 0;
}