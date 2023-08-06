#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n) {  
  for (int i = 0; i < n - 1; i++) {  
    // Find the maximum element in the unsorted portion of the array  
    int maxItemIndex = i;  
    for (int j = i + 1; j < n; j++) {  
      if (arr[j] > arr[maxItemIndex]) {  
        maxItemIndex = j;  
      }  
    }  
    // Swap the maximum element with the current element  
    int temp = arr[i];  
    arr[i] = arr[maxItemIndex];  
    arr[maxItemIndex] = temp;  
  }  
}

int main()
{
   
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }


    int m;
    cin>>m;
    int b[m];

   for(int i = 0; i<m; i++)
   {
     cin>>b[i];
   }
   
    a[n] = INT_MIN;
    b[m] = INT_MIN;
    
    int c[n+m];
    int lp = 0, rp = 0;
    //merge sort
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

    sortArray(c, m+ n);

    for(int i = 0; i<n+m; i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}