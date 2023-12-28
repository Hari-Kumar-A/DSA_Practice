#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// bool subArr0(vector <int> & arr) O(N^2)
// {
//     int n=arr.size();
//     int sum=0;
//     bool flag=false;
//     for(int i=0;i<n;i++)
//     {
//         sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum+=arr[j];
//             if(sum==0)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool subArr0(vector <int> & arr)
{
    int n=arr.size();
    int sum=0;
    unordered_set <int> sumSet(n);
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0 || sumSet.find(sum)!=sumSet.end())
        {
            return true;
        }
        sumSet.insert(sum);
    }
    return false;

}

int main()
{
    int n;
    cout<<"Enter the total number of elements:"<<endl;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag=subArr0(arr);
    (flag==true)?cout<<"Yes, we found"<<endl : cout<<"No, it sum=0 not exists"<<endl;
    return 0;
}
