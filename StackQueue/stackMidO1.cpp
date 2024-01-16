#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *next;
    struct Node *prev;
    int data;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *dummy = new Node(-1);

Node *head = dummy;
Node *mid = dummy;

int counte = 0;

void push(int data)
{
    Node *cur = new Node(data);
    cur->next = head;
    cur->prev = dummy;
    counte++;
    head->prev = cur;
    head = cur;
    if (counte == 1)
    {
        mid = cur;
    }
    else if (counte % 2 == 0)
    {
        mid = mid->prev;
    }
}

int pop()
{
    if (counte == 0)
    {
        cout << "Stack is empty";
        return -1;
    }

    int data = head->data;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
        
    counte--;
    if (counte % 2 != 0)
    {
        mid = mid->next;
    }
    return data;
}

int middle()
{
    if(counte==0)
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return mid->data;
}

void printData()
{
    Node* cur= head;  
    if(counte==0)
    {
        cout<<"Stack is empty"<<endl;
        return ;
    }

    Node* temp=head;
    for(int i=0;i<counte;i++)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    push(1);
    push(2);
    cout<<pop()<<endl;
    pop(); 
    printData();
    return 0;
}