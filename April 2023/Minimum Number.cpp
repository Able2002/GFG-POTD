class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        int a = arr[0];
        for(int i= 1; i<n; i++){
            a = __gcd(a,arr[i]);
        }
        return a;
    }
};
