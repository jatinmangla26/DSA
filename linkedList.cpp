#include <bits/stdc++.h>
class Node
{
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *addNode(Node *head, int data)
{
    if (head == NULL)
        return new Node(data);
}