#include <iostream>
using namespace std;

class StackUsingQueue
{
    int size;
    int f1, f2, r1, r2;
    int *q1, *q2;

public:
    StackUsingQueue(int n) // constructor
    {
        q1 = new int[n];
        q2 = new int[n];
        size = n;
        r1 = -1, r2 = -1, f1 = -1, f2 = -1;
    }
    void push1(int x)
    {
        if (f1 == -1)
        {
            f1++;
            r1++;
            q1[r1] = x;
            while (r2 >= f2)
            {
                r1++;
                q1[r1] = q2[f2];
                f2++;
            }
            if (f2 > r2)
            {
                f2 = r2 = -1;
            }
        }
        else
        {
            f2++;
            r2++;
            q2[r2] = x;
            while (r1 >= f1)
            {
                r2++;
                q2[r1] = q1[f2];
                f1++;
            }
            if (f1 > r1)
            {
                f1 = r1 = -1;
            }
        }
    }
    void pop1()
    {
        if (f1 > -1)
        {
            int x = q1[f1];
            f1++;
            cout << x << " is popped" << endl;
            if (f1 > r1)
            {
                f1 = r1 = -1;
            }
        }
        else if (f2 > -1)
        {
            int x = q2[f2];
            f2++;
            cout << x << " is popped" << endl;
            if (f2 > r2)
            {
                f2 = r2 = -1;
            }
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
};

int main()
{
    StackUsingQueue sq(5);
    sq.push1(5);
    sq.push1(19);
    sq.push1(43);
    sq.pop1();
    sq.pop1();
    sq.push1(143);
    sq.pop1();
    return 0;
}