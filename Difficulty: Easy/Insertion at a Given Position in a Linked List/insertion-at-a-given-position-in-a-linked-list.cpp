class Solution {
public:
    Node* insertPos(Node* head, int pos, int val) {
        Node* newNode = new Node(val);

       
        if (pos == 1) {
            newNode->next = head;
            return newNode;
        }

        Node* curr = head;
        int count = 1;

        // Traverse to the (pos - 1)th node
        while (curr != nullptr && count < pos - 1) {
            curr = curr->next;
            count++;
        }

        // If pos is invalid
        if (curr == nullptr) {
            return head;
        }

        // Insert node
        newNode->next = curr->next;
        curr->next = newNode;

        return head;
    }
};
