class Solution {
public:
    int grid[1005][1005];       
    bool vis[1005][1005];       
    vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
    int n,m;

    bool valid(int ci,int cj)
    {
        if(ci<0 || ci>=n || cj<0 || cj>=m)
            return false;
        return true;
    }

    void bfs(int si,int sj, int color)
    {
        int origColor = grid[si][sj];  
        if(origColor == color) return;  

        queue<pair<int,int>> q;
        q.push({si,sj});
        vis[si][sj] = true;
        grid[si][sj] = color;          

        while(!q.empty())
        {
            auto par = q.front();
            q.pop();
            
            int par_i = par.first;
            int par_j = par.second;

            for(int i=0;i<4;i++)
            {
                int ci = par_i + d[i].first;
                int cj = par_j + d[i].second;

                if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==origColor)
                {
                    q.push({ci,cj});
                    vis[ci][cj] = true;
                    grid[ci][cj]=color;
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n = image.size();
        m = image[0].size();

        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                grid[i][j] = image[i][j];

      
        memset(vis,false,sizeof(vis));

        bfs(sr,sc,color);

       
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                image[i][j] = grid[i][j];

        return image;
    }
};