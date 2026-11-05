class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        int box;
        
        bool cells[9][9]={};
        bool row[9][9] = {};
        bool col[9][9] = {};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(a[i][j] == '.')
                continue;
                int num = a[i][j]-'1';
                int box = (i/3)*3+(j/3);
                if(row[i][num] || col[j][num] || cells[box][num])
                return false;

                row[i][num]=true;
                 col[j][num] =true;
                  cells[box][num] = true;

            }
            
        }
        return true;
    }
};
