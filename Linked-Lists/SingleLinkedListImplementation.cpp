
#include <fstream>
#include <iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, Node* &tail, int data){
        //if linked list is empty
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }
        //step-> 1 : Create A Node
        Node* newNode = new Node(data);
        //step->2 : Point the newNode to your previous head
        newNode->next = head;
        //Step -> 3 : Make your newNode Head
        head = newNode;
}
void insertAtLast(Node* &head, Node* &tail, int data){
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
        }
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = newNode;
}
void printLinkedList(Node* &head){
        Node* temp = head;
        while(temp -> next != NULL){
            cout<<temp->data<<"->";
            temp = temp -> next;
        }
}
int main() {
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // input.txt
    freopen("output.txt", "w", stdout); // output.txt
#endif

    Node* head = NULL;
    Node* tail = NULL;
    cout<<"I am here"<<endl;
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    printLinkedList(head);
    cout<<"Inserting at Last"<<endl;
    insertAtLast(head, tail, 40);
    insertAtLast(head, tail, 50);
    insertAtLast(head, tail, 60);

}