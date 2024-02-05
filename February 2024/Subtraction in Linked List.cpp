class Solution {
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        
        Node * helper = new Node(0);
        
        while(head1 && head1->data==0)  head1 = head1->next;
        while(head2 && head2->data==0)  head2 = head2->next;
        
        if(!head1) return head2 ? head2 : helper;
        if(!head2) return head1 ? head1 : helper;
        
        Node* t1 = head1, *t2 = head2;
        while(t1 && t2 && t1->data==t2->data){
            t1 = t1->next;
            t2 = t2->next;
        }
        
        bool one = true;
        
        if(!t1 or (t2 && t2->data>t1->data)) one = false;
        
        
        int cnt1 = 0, cnt2 = 0;
        
        t1 = head1;
        Node * next, *prev = NULL;
        
        while(t1){
            next = t1->next;
            t1->next = prev;
            prev = t1;
            t1 = next;
            ++cnt1;
        }
        
        head1 = prev;
        
        prev = NULL, t2 = head2;
        
        while(t2){
            next = t2->next;
            t2->next = prev;
            prev = t2;
            t2 = next;
            ++cnt2;
        }
        
        head2 = prev;
        
        if(one && cnt2>cnt1) one = false;
        else if(!one && cnt1>cnt2) one = true;
        
        if(!one) swap(head1,head2);
        
        Node* head = new Node(-1);
        
        Node* t = head;
        t1 = head1;
        t2 = head2;
        int sub = 0;
        
        while(t1){
            
            int num = t1->data;
            if(t2) num -= t2->data;
            num -= sub;
            
            if(num<0){
                num += 10;
                sub = 1;
            }
            else {
                sub = 0;
            }
        
            t->next = new Node(num);
            t = t->next;
            t1 = t1->next;
            if(t2) t2 = t2->next;
            
        }
        
        
        head = head->next;
        prev = NULL;
        t = head;
        
        while(t){
            next = t->next;
            t->next = prev;
            prev = t;
            t = next;
        }
        
        
        head = prev;
        
        while(head && head->data==0) head = head->next;
        
        return head ? head : helper;
    
    }
};
