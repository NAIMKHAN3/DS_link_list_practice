#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_print (Node * head){
    Node * temp = head;
    if(temp == NULL) return;
    reverse_print(temp->next);
    cout << temp->val << " ";
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while(true){
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    reverse_print(head);
    return 0;
}