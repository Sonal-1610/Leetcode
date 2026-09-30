class MyLinkedList {
public:
    class Node {
    public:
        int val;
        Node* next;

        Node(int x) {
            val = x;
            next = NULL;
        }
    };
    Node* head;
    MyLinkedList() { head = NULL; }

    int get(int index) {
        Node* temp = head;
        int count = 0;

        while (temp != NULL) {
            if (count == index)
                return temp->val;

            count++;
            temp = temp->next;
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
    }

    void addAtTail(int val) {
        Node* newnode = new Node(val);

        if (head == NULL) {
            head = newnode;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int count = 0;

        while (temp != NULL && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
            return;

        Node* newnode = new Node(val);

        newnode->next = temp->next;
        temp->next = newnode;
    }

    void deleteAtIndex(int index) {
        if (head == NULL)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* cur = head;
        int count = 0;

        while (cur != NULL && count < index - 1) {
            cur = cur->next;
            count++;
        }

        if (cur == NULL || cur->next == NULL)
            return;

        Node* temp = cur->next;
        cur->next = temp->next;
        delete temp;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */