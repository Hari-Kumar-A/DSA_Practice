#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr, int k)
{
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int index=arr[i]%k;
        arr[index]+=k;
    }
    int maxElem=arr[0],result=0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElem)
        {
            maxElem = arr[i];
            result = i;
        }
    }
    cout<<result<<endl;
  
}

int main()
{
    int n,k;
    cin>>n;
    vector <int> a(n);
    for(auto&x:a)
    {
        cin>>x;
    }
    cout<<endl;
    cin>>k;

    solve(a,k);
    
    cout<<endl;
    return 0;
}
