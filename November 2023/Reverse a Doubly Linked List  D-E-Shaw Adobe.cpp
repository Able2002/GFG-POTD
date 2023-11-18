class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        Node* ntemp = head->prev;
        Node* ptemp = head;
        while(head!=NULL){
            ptemp = head;
            head = head->next;
            ptemp->next = ntemp;
            ptemp->prev = head;
            if(ntemp)
                ntemp->prev = ptemp;
            ntemp = ptemp;
        }
        return ptemp;
    }
};
