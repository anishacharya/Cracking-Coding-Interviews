/*
There are a total of n courses you have to take, labeled from 0 to n - 1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

For example:

2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.

2, [[1,0],[0,1]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

*/

class Solution {
public:
    bool checkcycle(vector<vector<int>> &g,int u,bool *vis,bool *path)
    {
        vis[u]=true;
        path[u]=true;
        
        for(auto x: g[u])
        {
            if(path[x]) return true;
            if(!vis[x] && checkcycle(g,x,vis,path)) return true;
        }
        path[u]=false;
        return false;

    }
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) 
    {
        vector< vector<int> > graph(numCourses);
        
        for(auto x : prerequisites)
        {
            graph[x.second].push_back(x.first);
        }
        
        bool vis[numCourses];
        bool path[numCourses];
        
        for(int i=0;i<numCourses;i++) vis[i]=false,path[i]=false;
        
        for(int i=0;i<numCourses;i++)
            if(!vis[i] && checkcycle(graph,i,vis,path)) return false;
        
        return true;
    }
};
