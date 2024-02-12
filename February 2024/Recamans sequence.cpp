class Solution{
public:
    vector<int> recamanSequence(int n){
        unordered_map<int,bool> visited;
        vector<int> ans(n,0);
        visited[ans[0]]=true;
        for(int i=1;i<n;i++){
            if((ans[i-1]-i) >0  && !visited[ans[i-1]-i])
                ans[i]=ans[i-1]-i;
            else
                ans[i]=ans[i-1]+i;
        
            visited[ans[i]]=true;
        }
        return(ans);
    }
};
