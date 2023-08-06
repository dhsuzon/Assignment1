#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x;
    cin>>x;
    int l = 0;
    int flag = 0;
    int r = n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == x)
        {
            if(arr[mid] == arr[mid+1])
            {
                flag = 1;
                break;
                
            }
            else
            {
                flag = 0;
                break;
            }
        }
        else if( x> arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        //int flag = 0;
    
    }
    if( flag ==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}