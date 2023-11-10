class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
         int count=0;
        int data=-1;
        int max=-1;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(arr[j][i]==0)
                {
                    count++;
                }
            }
            if(count>0  && count>data){
                data=count;
                max=i;
            }
            count=0;
        }
        return max;
        
    }
};
