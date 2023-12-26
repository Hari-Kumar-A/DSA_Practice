class Solution { //leetcode
public:
    vector <int> Squares(int n)
    {
        vector <int> perfectSquares;
        int i=1; 
        while(i<=n)
        {
            int x=pow(i++,2);
            perfectSquares.push_back(x);
        }
        return perfectSquares;
    }

    int countTriples(int n) {
        int count=0;
        vector <int> perfectSquares=Squares(n);
        for(int a=1;a<=n;a++)
        {
            int aSquare=pow(a,2);
            for(int j=0;j<perfectSquares.size();j++)
            {
                int cSquare=perfectSquares[j];
                int bSquare=abs(cSquare-aSquare);

                int b=sqrt(bSquare);
                int c=sqrt(cSquare);


                if( (c<a) || (find(perfectSquares.begin(), perfectSquares.end(),bSquare)==(perfectSquares.end())))
                {
                    continue;
                }
                if (aSquare+bSquare==cSquare)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

//brute force
class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int a=1;a<=n;a++)
        {
            for(int b=1;b<=n;b++)
            {
                for(int c=1;c<=n;c++)
                {
                    if((a*a)+(b*b)==(c*c))
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};