class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
       int left = 0;
        int right = 0;
        int found = -1;
        long long sum = arr.at(0);
        while (left<n && right<n)
        {
            if(sum==s)
            {
                found = 1;
                break;
            }
            else if (sum < s)
            {
                if (right==n-1)
                {
                    break;
                }
                sum = sum + arr[++right];
            }
            
            else if (sum > s)
            {
                sum = sum - arr[left++];
                if(left>right)
                {
                    right = left;
                    sum = arr[left];
                }
            }
        }
        vector<int> result;
        if (found ==1)
        {
            result = {left+1, right+1};
        }
        else
        {
            result = {-1};
        }
        return result;
    }
};
