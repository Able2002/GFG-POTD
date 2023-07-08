class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
       vector<bool>a(n+1,false);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0 || arr[i]>n){
                continue;
            }
            a[arr[i]]=true;
        }
        for(int i=1;i<=n;i++)
            if(a[i]==false)
                return i;
        return n+1;
    } 
};
