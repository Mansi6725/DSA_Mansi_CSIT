class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int> r;
        
        int row_st=0;
        int col_st=0;
        int row_en=row-1;
        int col_en=col-1;
        
        int count=0;
        int total=row*col;
        
        while(count<total){
            for(int i=col_st;count<total&&i<=col_en;i++){
                r.push_back(matrix[row_st][i]);
                count++;
            }
            row_st++;
            
             for(int i=row_st;count<total&&i<=row_en;i++){
                  r.push_back(matrix[i][col_en]);
                 count++;
             }
            col_en--;
            
             for(int i=col_en;count<total&&i>=col_st;i--){
                    r.push_back(matrix[row_en][i]);
                 count++;
             }
            row_en--;
            
             for(int i=row_en;count<total&&i>=row_st;i--){
                 r.push_back(matrix[i][col_st]);
                 count++;
             }
            col_st++;
        }
        return r;
        
    }
};