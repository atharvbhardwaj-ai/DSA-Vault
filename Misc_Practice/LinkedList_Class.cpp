#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node *nxt;

    // Constructor
    Node (int val) {
        data = val;
        nxt = nullptr;
    }
};

class LinkedList {
    private:

    Node* head;

    public:

    LinkedList() {
        head = nullptr;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        temp->nxt = head;
        head = temp;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);

        if(head == nullptr) {
            head = temp;
            return;
        }

        Node* tail = head;
        while (tail->nxt != nullptr) {
            tail = tail->nxt;
        }
        tail->nxt = temp;
    }
    
    void deleteFirst() {
		if(head == nullptr){
			return;
		}
		head = head->nxt;
	}

    void insertAtPos(int val, int pos) {
        if(pos == 1) {
                insertAtHead(val);
                return;
        }
        Node* newNode= new Node(val);
        Node* temp = head;
        for (int i = 1; i < pos - 1; i ++) {
            temp = temp->nxt;
        }

        if (temp->nxt != nullptr) {
            newNode->nxt = temp->nxt;
            temp->nxt = newNode;
        } else {
            insertAtTail(val);
        }
    }

    void deleteAtPos(int pos) {
        if(pos == 1) {
            deleteFirst();
        }
        Node* temp = head;
        for (int i = 1; i < pos - 1; i ++) {
            temp = temp->nxt;
        }
        if(temp->nxt != nullptr) {
            Node* temp2 = temp;
            temp2 = temp2->nxt;
            temp->nxt = temp2->nxt;
            temp2->nxt = nullptr;
        } else {
            temp->nxt = nullptr;
        }
    }

    void printList() {
        Node* temp = head;

        while(temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->nxt;
        }
        cout << "NULL\n";
    }

    ~LinkedList() {
        Node* current = head;

        while (current != nullptr) {
            Node* next_node = current->nxt;
            delete current;
            current = next_node;
        }
    }
};

int main() {
    LinkedList l;

    l.insertAtHead(20);
    l.insertAtHead(10);
    l.insertAtTail(30);
    l.insertAtTail(40);
    l.printList();
    
    l.deleteFirst();
    l.printList();

    l.insertAtPos(60,4);
    l.insertAtPos(50,4);
    l.printList();

    l.deleteAtPos(4);
    l.printList();
    l.deleteAtPos(4);
    l.printList();

    return 0;
}