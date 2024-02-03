class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
         long long unsigned int decimalValue(Node *head)
        {
           // Your Code Here
           long long unsigned int  ans=0;
           Node *temp=head;
           
          while(temp!=NULL)
          {
              ans=ans<<1;
              ans=ans|temp->data;
              ans=ans%1000000007;
              temp=temp->next;
              
          }
          return ans;
        }
};
