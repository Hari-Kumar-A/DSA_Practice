#include <bits/stdc++.h>
using namespace std;

 typedef long long ll;

void solve(vector <int> arr)
{
    int n=arr.size();
    if(n==1){
        cout<<"0";
        return ;    
    }
    
    int *prodArr=new int[n];
    int temp=1;
    for(int i=0;i<n;i++)
    {
        prodArr[i]=temp;
        temp*=arr[i];
    }
  
    temp=1;
    for(int j=n-1;j>=0;j--)
    {
        prodArr[j]*=temp;
        temp*=arr[j];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prodArr[i]<<" ";
    }
    cout<<endl;
    delete [] prodArr;
}

int main()
{ 
    ll n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    solve(arr);

    return 0;

}