#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr)
{
    int n=arr.size();
    //[0 low-1]]  [low mid-1]   [mid,    high]         [high+1, n-1]
    // 0 0 0 0 0   1 1 1 1 1     0 1 2 0 0 1 2          2 2 2 2 2 2 
    int low=0,mid=0, high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
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
