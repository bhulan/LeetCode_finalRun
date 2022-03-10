class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int>ans;
        int r=matrix.size();
        int c=matrix[0].size();
        int ul=0,ur=c-1;
        int bl=0,br=r-1;
        while(ul<br && bl<ur){
            for(int i=bl;i<=ur;i++){
                ans.push_back(matrix[ul][i]);
            }
            ul++;
            for(int i=ul;i<=br;i++){
                ans.push_back(matrix[i][ur]);
            }
            ur--;
            for(int i=ur;i>=bl;i--){
                ans.push_back(matrix[br][i]);
            }
            br--;
            for(int i=br;i>=ul;i--){
                ans.push_back(matrix[i][bl]);
            }
            bl++;
        }
        if(ul==br){
            for(int i=bl;i<=ur;i++){
                ans.push_back(matrix[ul][i]);
            }
        }
            else if(bl==ur){
            for(int i=ul;i<=br;i++){
                ans.push_back(matrix[i][ur]);
            }
            }
            return ans;
    }
};
