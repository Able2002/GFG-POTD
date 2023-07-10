class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
   vector<int>ans;
   
   int rowStart =0;
   int rowEnd = n-1;
   
   int colStart = 0;
   int colEnd = m-1;
   
   while(rowStart <= rowEnd && colStart<=colEnd){
       
       //left to right
       for(int i=colStart; i<=colEnd; i++){
           ans.push_back(a[rowStart][i]);
       }
       rowStart++;
       
       //top to bottom
       for(int i=rowStart; i<=rowEnd; i++){
           ans.push_back(a[i][colEnd]);
       }
       colEnd--;
       
       if(rowStart<=rowEnd){
           for(int i=colEnd; i>=colStart; i--){
               ans.push_back(a[rowEnd][i]);
           }
           rowEnd--;
       }
       
       if(colStart <= colEnd){
           for(int i=rowEnd; i>=rowStart; i--){
               ans.push_back(a[i][colStart]);
           }
           colStart++;
       }
   }
   
   return ans[k-1];
    }
};
