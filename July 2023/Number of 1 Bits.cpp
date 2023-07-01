class Solution {
  public:
    int setBits(int N) {
        int count=0;
        for(int i=31;i>=0;i--){
            int bit=(N>>i) & 1;
            if(bit==1){
                count++;
            }
        }
        return count;
    }
};
