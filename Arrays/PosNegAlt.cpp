#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr)
{
    int n=arr.size(); 
    //[0 low-1]      [low  mid]   [mid+1     n-1]  //922 cylinder rupees
    // -3 -9 -2 -5      -2         0        8 4    9  5 6 7 8 9 12
    int low=0,mid=n-1;
    while(low<=mid)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else
        {
            swap(arr[low],arr[mid]);
            mid--;
        }
    }
    //-3 -9 -18 7 8 9 4 4 0
    //7 -9 -18 -3  8  9 4 4 0
    //7 -9   8 -3 -18 9 4 4 0

    int track=0;
    while(arr[track]<0)
    {
        track++;
    }


    for(int i=0;i<n/2;i++)
    {
        
    
            swap(arr[2*i],arr[track]);
            track++;
        
    }
    


    
}

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    solve(a);
    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
