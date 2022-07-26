class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         vector<vector<int>> r;
        if(original.size()/m!=n || original.size()%m!=0){
            return r;
        }
        int index=0;
        for(int i=0;i<m;i++){
           vector<int> a;
            for(int j=0;j<n;j++)
                a.push_back(original[index++]);
            r.push_back(a);   
        }
        return r;
    }
};