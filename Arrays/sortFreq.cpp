#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool compare( pair<int, pair<int,int>> p1, pair<int,pair<int,int>> p2)
{
    if(p1.second.second != p2.second.second){
        return (p1.second.second>p2.second.second);
    }
    else{
        return p1.second.first<p2.second.first;
    }
}

void sortFreq(vector <int> &arr)
{
    int n=arr.size();
     // 1 2 2 2 3 8 8 9 7
     unordered_map <int, pair<int, int> > hash;
     // key is arr[i] , valu is pair(index, frequency)
     for(int i=0;i<n;i++)
     {
        if(hash.find(arr[i]) ==hash.end())
        {
            hash[arr[i]]=make_pair(i,1);
        }
        else{
            hash[arr[i]].second++;//increase frequency
        }
     }

     vector < pair<int, pair<int, int> > > result;
     for(auto it: hash)
     {
        result.push_back(it);
     }

     sort(result.begin(), result.end(), compare);

     for(auto it:result)
     {
        int count=it.second.second;
        while(count--)
        {
            cout<<it.first<<" ";
        }
     }


}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(auto&x : arr)
    {
        cin>>x;
    }
    sortFreq(arr);
    return 0;
}