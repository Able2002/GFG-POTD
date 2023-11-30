

class Solution{   
public:
    int minimumStep(int n)
    {
        int count=0;
        while(n)
         {
             if(n/3) count+=1;
             count+=n%3;
             n=n/3;
             if(n==1) break;
             if(n==2) return ++count;
         }
         
        return count;
    }
};

