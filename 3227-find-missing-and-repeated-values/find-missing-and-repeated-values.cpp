class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int sz=grid.size();
        vector<int >ans;
        bool vis[sz*sz + 1];
       memset(vis,false,sizeof(vis));
       int sum=0;
       for(int i=0;i<sz; i++)
       {
             for(int j=0;j<sz; j++)
           {    sum+=grid[i][j];
                int val = grid[i][j];
                vis[val]=true;
           }
       }

        int miss;
        int totalSum=((sz*sz)*(sz*sz+1))/2;
        for(int i=1;i<sz*sz+1;i++)
        {
            if(vis[i]==false){
                     miss=i;
                     break;
            }
            
        }

        int re;
        re=sum - (totalSum-miss);
        ans.push_back(re);
        ans.push_back(miss);
        return ans;
    }
};