#include <bits/stdc++.h>
class NStack //coding ninjas
{
public:
    int *arr;
    int *top;
    int *next;
    int freeSpot;
    int size;
    int n;
    NStack(int N, int S)
    {
        arr = new int[S];
        top = new int[N];
        next = new int[S];
        n = N;
        size = S;
        freeSpot = 0;
        for (int i = 0; i < n; i++)
            top[i] = -1;
        for (int i = 0; i < size; i++)
            next[i] = i + 1;
        next[size - 1] = -1;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        if (freeSpot == -1)
            return false;
        // find index
        int index = freeSpot;

        // update frespot
        freeSpot = next[index];

        // insert x
        arr[index] = x;

        // update next
        next[index] = top[m - 1];

        // update top
        top[m - 1] = index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if (top[m - 1] == -1)
            return -1;
        int index = top[m - 1];
        top[m - 1] = next[index];
        int x = arr[index];
        next[index] = freeSpot;
        freeSpot = index;
        return x;
    }
};