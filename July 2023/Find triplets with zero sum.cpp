class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    {  sort(arr, arr+n); // sorting
        for(int i=0;i<n;i++){
            int j=i+1, k=n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]==0)
                return 1;
                if(arr[i]+arr[j]+arr[k]<0)
                j++;
                else
                k--;
            }
        }
        return 0;//Your code here
    }
};
