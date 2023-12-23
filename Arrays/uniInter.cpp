#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//intersection of two unsorted arrays leetcode 349
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s;
        vector <int> res;
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
                s.erase(nums2[i]);
                res.push_back(nums2[i]);
            }
        }
        return res;

    }
};

//intersection of two unsorted arrays leetcode 3450
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector <int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int l1=nums1.size();
        int l2=nums2.size();
        while(i<l1 && j<l2)
        {
            if(nums1[i]>nums2[j])
            {
                  
                j++;
            }
            else if(nums2[j]>nums1[i])
            {
                
                i++;
            }
            else
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;

    }
};

//union of 2 arrays using set..
class Solution {
public:
    vector<int> Union(vector<int>& nums1, vector<int>& nums2) {
        set <int> s;
        vector <int> res;
        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            s.insert(nums2[i]);
        }
        for(auto it:s)
        {
            res.push_back(it);
        }
        return res;

    }
};

int main()
{
    
    return 0;
}