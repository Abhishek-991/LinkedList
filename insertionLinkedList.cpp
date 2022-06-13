#include <iostream>
using namespace std;

//structure of node
class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next =NULL;
    }
};

//insertion from beginnig
void insertAtHead(Node* &head, int d){

    Node* temp=new Node(d);
    temp->next = head;
    head=temp;

}

//insertion at tail
void insertAtTail(Node* &tail,int d){

    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;

}

//for printing the Linked List
void print(Node* h){
    
    Node* temp=h;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//main function
int main()
{

    Node* node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    Node* head=node1;
    Node* tail=node1;

    print(head);
    insertAtHead(head,20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, 50);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    return 0;
}
