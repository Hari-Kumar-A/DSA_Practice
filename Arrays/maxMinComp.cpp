#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &arr)
{
    
    int n=arr.size();
    if(n==0)
    {
        cout<<"Max :"<<arr[0]<<endl;
        cout<<"Min :"<<arr[0]<<endl;
        return ;
    }

    int maxElem, minElem;

    if(arr[0]>arr[1])
    {
        maxElem=arr[0];
        minElem=arr[1];
    }
    else{
        maxElem=arr[1];
        minElem=arr[0];
    }

    if(n%2==0)//even 
    {
        for(int i=2;i<n;i+=2)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]>maxElem) maxElem=arr[i];
                if(arr[i+1]<minElem) minElem=arr[i+1];
            }
            else
            {
                if(arr[i+1]>maxElem) maxElem=arr[i+1];
                if(arr[i]<minElem) minElem=arr[i];
            }
        }
    }
    else // odd 5 3 6 7 8
    {
        for(int i=2;i<n-1;i+=2)
        {
            if(arr[i]>arr[i+1])
            {
                if(arr[i]>maxElem) maxElem=arr[i];
                if(arr[i+1]<minElem) minElem=arr[i+1];
            }
            else
            {
                if(arr[i+1]>maxElem) maxElem=arr[i+1];
                if(arr[i]<minElem) minElem=arr[i];
            }
        }
        if(arr[n-1]>maxElem) maxElem=arr[n-1];
        if(arr[n-1]<minElem) minElem=arr[n-1];
       


    }
    cout<<"Max :"<<maxElem<<endl;
    cout<<"Min :"<<minElem<<endl;
    
     
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
