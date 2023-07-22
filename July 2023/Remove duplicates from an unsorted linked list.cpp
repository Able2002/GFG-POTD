class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        if(head==NULL){
            return NULL;
        }
     Node* temp = head;
     Node* prev = head;
     set<int> st;
     st.insert(temp->data);
     temp = temp->next;
     while(temp){
         if(st.find(temp->data) != st.end()){
             prev->next = temp->next;
         }
         else{
             st.insert(temp->data);
             prev = temp;
         }
          temp=temp->next;
     }
     return head;
    }
};
