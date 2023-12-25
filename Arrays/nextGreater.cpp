class Solution { //leetcode
public:
    long long nextGreaterElement(int n) {
        string str=to_string(n);
        int i;
        for( i=str.size()-1;i>0;i--)
        {
            if(str[i]>str[i-1])
            {
                break;
            }
        }
        if(i==0)
        {
            return -1;
        }
        int x=str[i-1];
        int curSmallIndex=i;
        for(int j=i+1;j<str.size();j++)
        {
            if(str[j]>x && str[j]<str[curSmallIndex])
            {
                curSmallIndex=j;
            }  
        }
        swap(str[i-1],str[curSmallIndex]);
        sort(str.begin()+i, str.end());
        long long result = stoll(str);
        if (result <= INT_MAX) {
            return result;
        } else {
            return -1;
        } 
    }
};