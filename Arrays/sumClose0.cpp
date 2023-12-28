#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void sumClose(vector<int> arr)
{
    int n=arr.size();
    sort(arr.begin(), arr.end());

    int sum=0;
    int l=0; 
    int r=n-1;
    int num1=0;
    int num2=n-1;
    while(l<r)
    {
        int temp=arr[l]+arr[r];
        if(abs(temp)<abs(sum))
        {
            sum=temp;
            num1=l;
            num2=r;

        }
        if(sum<0)
        {
            l++;
        }
        else{
            r--;    
        }
    }
    cout<<arr[num1]<<" "<<arr[num2]<<endl;

}
nt main()
{
    int n;
    cout<<"Enter the total number of elements:"<<endl;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sumClose(arr);
    return 0;
}i