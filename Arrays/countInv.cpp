#include <bits/stdc++.h>
using namespace std;

int counte=0;
void mergeE(vector <int> & arr, int l, int mid, int r)
{
    vector<int>A,B;
    for(int i=l;i<=mid;i++)
    {
        A.push_back(arr[i]);
    }

    for(int j=mid+1;j<=r;j++)
    {
        B.push_back(arr[j]);
    }

    int i=0,j=0;
    int k=l;

    while(i<A.size() && j<B.size())
    {
        if(A[i]<=B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else{
            counte+=(mid-i+1);
            arr[k]=B[j];
            j++;
        }   
        k++;
    } 
    while(i<A.size())
    {
        arr[k]=A[i];
        i++;
    }
    while(j<B.size())
    {
        arr[k]=B[j];
        j++;
    }
}

// 4 3 2 10 12 1 5 6
void mergeSort(vector <int> &arr, int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        mergeE(arr,l,mid,r);
    }
}

 


void printArr(vector <int> arr)
{
    for(auto it: arr)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vector <int> arr={3 ,2,1}; 
    mergeSort(arr, 0, arr.size()-1); 
    cout<<counte<<endl;
    return 0;
}