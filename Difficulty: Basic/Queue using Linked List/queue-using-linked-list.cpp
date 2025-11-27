class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
Node *front;
Node*rear;
  public:
    myQueue() {
        // Initialize your data members
        front=nullptr;
        rear=nullptr;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front==nullptr;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* node=new Node(x);
     
        if(isEmpty())
        {
            front=rear=node;
            return;
        }
        rear->next=node;
        rear=rear->next;
    }

    void dequeue() {
        // Removes the front element of the queue
        if(isEmpty())
        return;
        front=front->next;
        if(front==nullptr)
        rear=nullptr;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty())
        return -1;
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        int count=0;
        Node*curr=front;
        while(curr!=nullptr)
        {
            curr=curr->next;
            count++;
        }
        return count;
    }
};
