#include <bits/stdc++.h>
//fishes yates shuffle algorithm
using namespace std;

#define ll long long

void solve(vector <int> & arr)
{
    srand(time(NULL));

    for(int i=0;i<arr.size();i++)
    {
        int j=rand() % (i+1); //taking any index in range 0 to i
        swap(arr[i],arr[j]);
    }
}

int main()
{ 
    ll n;
    cin>>n;
    vector <int> arr(n);
    for(auto&it :arr){
        cin>>it;
    }
    solve(arr);
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;

}