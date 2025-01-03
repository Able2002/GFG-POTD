class Solution {
    public long subarrayXor(int arr[], int k) {
        // code here
        long ans=0;
        Map<Integer,Integer> mp = new HashMap();
        int currXOR=0;
        mp.put(0,1);
        for(int i: arr){
            currXOR=currXOR^i;
            if(mp.containsKey(currXOR^k))
                ans+=mp.get(currXOR^k);
            mp.put(currXOR, mp.getOrDefault(currXOR,0)+1);
        }
        return ans;
    }
}
