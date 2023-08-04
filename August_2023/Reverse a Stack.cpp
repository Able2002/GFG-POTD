class Solution{
public:
    void insert_at_bottom(stack<int> &St,int x){
        if(St.size()==0){
            St.push(x);
        }
        else{
            int y=St.top();
            St.pop();
            insert_at_bottom(St,x);
            St.push(y);
        }
    }
    void fun(stack<int> &St){
        if(St.size()>0){
            int x=St.top();
            St.pop();
            fun(St);
            insert_at_bottom(St,x);
        }
    }
    void Reverse(stack<int> &St){
        fun(St);
    }
};
