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



int main() {
    int n;
    cin >> n;

    vector<int> digitArr = convertToArr(n);//converting 1331 to array [1 3 3 1]

    bool isPalindrome = checkPalindrome(digitArr); //checking palindrome

    int len = digitArr.size();//length of array

    if (isPalindrome) {
        if (isAll9(digitArr)) {
            cout << n + 2 << endl;//999+2=1001
        } else { 
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
            printArray(digitArr);
        }
    }  

    return 0;
}
