class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        if (matrix.empty())
            return;
            
        vector<int> rows;
        vector<int> cols;
        
        for (int i=0; i<matrix.size(); ++i) 
            for (int j=0; j<matrix[i].size(); ++j) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        for (int k=0; k<rows.size(); ++k)
            for (int j=0; j<matrix[rows[k]].size(); ++j)
                matrix[rows[k]][j] = 0;
        for (int k=0; k<cols.size(); ++k)
            for (int j=0; j<matrix.size(); ++j)
                matrix[j][cols[k]] = 0;
    }
};
