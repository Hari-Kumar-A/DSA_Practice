#include <iostream> 
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool isAll9( vector<int>& arr) {
    for (int digit : arr) {
        if (digit != 9) {
            return false;
        }
    }
    return true;
}

void printArray(vector<int>& arr) {
    for (int digit : arr) {
        cout << digit << " ";
    }
    cout << endl;
}

vector<int> convertToArr(int n) {
    vector<int> ans;
    while (n > 0) {
        int rem = n % 10;
        ans.push_back(rem);
        n /= 10;
    }
    reverse(ans.begin(), ans.end()); //reversing array
    return ans;
}

void nextPalindrome(vector <int> & digitArr,int len)
{
    int left = len % 2 == 0 ? len / 2 -1 : len / 2;
    int right = len / 2; 

    while (left >= 0 && right < len) {
        if (digitArr[left] != 9) {
            digitArr[left]++;
            if(left!=right)
            {
                digitArr[right]++;
            } 
            break;
        } else {
            digitArr[left] = digitArr[right] = 0;
            left--;
            right++;
        }
    }
}



int main() {
    int n;
    cin >> n;

    vector<int> digitArr = convertToArr(n);//converting 1331 to array [1 3 3 1]

    bool isPalindrome = checkPalindrome(digitArr); //checking palindrome

    int len = digitArr.size();//length of array

    if (isPalindrome)
    {

        if (isAll9(digitArr)) {
            cout << n + 2 << endl;//999+2=1001
        } else { 
            nextPalindrome(digitArr, len); 
            printArray(digitArr);
        }


    } 
    else
    {

        int left = (len%2==0)?len / 2 -1 :len / 2; //1 3 | 2 4,left=2, right=3 //1 2 3  4  6 2 8
        int check=left;
        int right = len /2;                                 //0 1 2  3  4 5 6  index, n=7


        //left=3
        //right=3
        //7 8 3   3 2 2
        bool flag=true;//case 1
        while(left>=0 && right<len)
        {
            if(digitArr[left]==digitArr[right])
            {
                left--;
                right++;
            }
            else if(digitArr[left]>digitArr[right])
            {
                flag=false;//noraml mirroring
                break;  
            }
            else if(digitArr[left]<digitArr[right])
            {
                if(digitArr[left]!=9)//it is 2
                {
                    if(left!=check)
                    {
                        digitArr[++left]++;
                    }
                    else{
                        digitArr[left]++;
                    }
                   
                    flag=false;
                    break;
                }
                else // it is 9
                {
                    digitArr[left]=0;
                    left--;
                    right++;
                }
            }
        }

            if(flag==false)
            {
                left = (len%2==0)?len / 2 -1 :len / 2; //1 3 | 2 4,left=2, right=3 //1 2 3  4  6 2 8
                right = len /2;  
                while(left>=0 && right<len)
                {
                    digitArr[right]=digitArr[left];
                    left--;
                    right++;
                }
            }
             printArray(digitArr); 
    } 
    



   
   

    return 0;
}
