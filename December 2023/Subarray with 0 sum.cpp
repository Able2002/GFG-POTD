class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,bool> mpp;
        int sum =0;
        mpp[0] =true;
        for(int i =0;i< n;i++){
            sum+=arr[i];
            if(mpp[sum]) return true;
            mpp[sum] = true;
        }
        return false;
    }
};
