#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr) //Kadane's Algorithm
{
    int maxSum=-1;
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxSum=max(maxSum,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<maxSum<<endl;
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
    
    cout<<endl;
    return 0;
}
