class Solution{
public:
     int minValue(string s, int k){
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int idx = ch-'a';
            freq[idx]++;
        }
        while(k--){
            int maxidx=0;
            for(int i=0;i<26;i++){
                if(freq[i]>freq[maxidx]){
                    maxidx=i;
                }
            }
            freq[maxidx]--;
        }
        long long sum=0;
        for(int i=0;i<26;i++){
            sum+=pow(freq[i],2);
        }
        return sum;
    }
};
