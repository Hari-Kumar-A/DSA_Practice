#include <iostream>
using namespace std;
#include <bits/stdc++.h>


void Repeat(vector <int>& arr)
{
    int x=0, y=0;
    int n=arr.size();
    int mainXor=0;arr.size();
    int natXor=0;
    for(int i=0;i<n;i++)
    {
        mainXor=mainXor^arr[i];
    }
    for(int i=1;i<=(n-2);i++)
    {
        natXor=natXor^i;
    }
    mainXor=mainXor^natXor;
     
    bool flag=true;
    int filterMask=1;
    while(flag)
    {
        
        if((mainXor & filterMask) !=0)
        {   
            flag=false;   
        }
        else{
            filterMask=(filterMask<<1);
        } 
    }
    for(int i=0;i<n;i++)
    {
        if((filterMask&arr[i]))
        {
            x=x^arr[i];
        }
        else{
            y=y^arr[i];
        }
    }

    for(int i=1;i<=(n-2);i++)
    {
        if((i & filterMask))
        {
            x=x^i;
        }
        else{
            y=y^i;
        }
    }
    cout<<"Repeating numbers are :"<<x<<" "<<y<<endl;

}
int main()
{
    vector <int> arr;
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    Repeat(arr);

    return 0;
}