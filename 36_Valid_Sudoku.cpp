//子矩阵——
//0 1 2
//3 4 5
//6 7 8
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false},col[9][9]={false},sub[9][9]={false};
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0'-1;
                    int k=i/3*3+j/3;
                    if(row[i][num] || col[j][num] || sub[k][num]) return false;
                    row[i][num]=true;
                    col[j][num]=true;
                    sub[k][num]=true;
                }
            }
        }
        
        return true;
    }
};
