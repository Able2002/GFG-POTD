class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
         for(int i{l-1};i<=(r-1);i++){
            if(y & (1 << i)) x |= (1 << i);
        }
        return x;
    }
};
