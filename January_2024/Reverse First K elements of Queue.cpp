class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        int n=q.size();
        vector<int> arr(n, 0);
        int j=k-1;
        for(int i=0;i<n;i++){
            if(j>=0){
            arr[j]=q.front();
            j--;
            }
            else{
               arr[i] = q.front();
            }
            q.pop();   
        }
        
        for(int i=0;i<n;i++){
            q.push(arr[i]);
        }
        return q;
    }
};
