/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);

       
        if (head == NULL || data <= head->data) {
            newNode->next = head;
            return newNode;
        }

        Node* curr = head;

        while (curr->next != NULL && curr->next->data < data) {
            curr = curr->next;
        }

      
        newNode->next = curr->next;
        curr->next = newNode;

        return head;
    }
};