//https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/
int minRow(vector<vector<int>> &mat) {
        int index=-1;
        int r=mat.size();
        int c=mat[0].size();
        int i=0;
        int j=c-1;
        while(i<r && j>=0){
            if(mat[i][j]==1){
                index=i;
                j--;
            }
            else{
                i++;
            }
        }
        return index;
    }
