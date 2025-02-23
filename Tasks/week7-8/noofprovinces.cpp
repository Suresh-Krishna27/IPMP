//https://leetcode.com/problems/number-of-provinces/
class Solution {
private:
    void dfs(vector<int>& vis,int src,vector<vector<int>>& adj){
        vis[src]=1;
        for(auto it:adj[src]){
            if(!vis[it]){
                dfs(vis,it,adj);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) { 
                    adj[i].push_back(j);
                }
            }
        }

        int count = 0;
        vector<int> vis(n, 0); 

        
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(vis, i, adj); 
                count++; 
            }
        }

        return count;
    }
};
