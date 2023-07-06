class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int lo = n-1; int hi = 0;
            while(lo>=0 && hi<m){
                if(arr1[lo]>arr2[hi]){
                    swap(arr1[lo], arr2[hi]);
                    hi++;
                }
                lo--;
            }
            sort(arr1, arr1+n);
            sort(arr2, arr2+m);
        } 
};
