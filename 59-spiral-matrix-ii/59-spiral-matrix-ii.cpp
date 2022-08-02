class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> r(n,vector<int>(n,0));
        
        int row_st=0;
        int col_st=0;
        int row_en=n-1;
        int col_en=n-1;
        
        int count=0;
        int total=n*n;
        int c=1;
        while(count<total){
            for(int i=col_st;count<total&&i<=col_en;i++){
                r[row_st][i]=c++;
                count++;
            }
            row_st++;
            
             for(int i=row_st;count<total&&i<=row_en;i++){
                  r[i][col_en]=c++;
                 count++;
             }
            col_en--;
            
             for(int i=col_en;count<total&&i>=col_st;i--){
                     r[row_en][i]=c++;
                 count++;
             }
            row_en--;
            
             for(int i=row_en;count<total&&i>=row_st;i--){
                  r[i][col_st]=c++;
                 count++;
             }
            col_st++;
        }
        return r;
    }
};