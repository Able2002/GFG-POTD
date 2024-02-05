class Solution
{
    public:
    Node* sortedInsert(Node* head, int data) {
        if (head == nullptr) {
           Node* node = new Node(data);
           node->next = node;
           
           return node;
        }
        
        Node* node = new Node(data), *prev = head, *curr = head->next;
        
        while (curr != head) {
            if (data >= prev->data && data < curr->data)
                break;
            
            Node* temp = curr->next;
            prev = curr;
            curr = temp;
        }
        
        prev->next = node;
        node->next = curr;
        
        return curr == head && curr->data > data ? node : head;
    }


};
