vector<int> twoOddNum(vector<int> arr){
    vector <int> ans;
    int xorMain=0;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        xorMain=xorMain^arr[i];
    }
    bool flag=false;
    int filterMask=0;
    int mask=1;
    while(flag==false)
    {
        
        if((xorMain & mask)==0)
        {
            mask=mask<<1;
        }
        else{
            filterMask=mask;
            flag=true;
        }
    }
    int ansA=0, ansB=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&filterMask)==0)
        {
            ansA=ansA^arr[i];
        }
        else{
            ansB=ansB^arr[i]; 
        }
    }
    ans.push_back(ansA);
    ans.push_back(ansB);
    return ans;


}