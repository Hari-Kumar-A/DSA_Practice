#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr)
{
    int n=arr.size(); 
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
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
