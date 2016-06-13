/*
There are a total of n courses you have to take, labeled from 0 to n - 1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.

There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

For example:

2, [[1,0]]
There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1]

4, [[1,0],[2,0],[3,1],[3,2]]
There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. So one correct course order is [0,1,2,3]. Another correct ordering is[0,2,1,3].

Note:
The input prerequisites is a graph represented by a list of edges, not adjacency matrices. Read more about how a graph is represented.
*/

class Solution {
public:
    void topological_sort(vector< vector<int> >&g, int u, bool *Visited, stack<int>&S )
    {
        Visited[u]=true;
        
        for(auto x : g[u])
        {
            if(!Visited[x])
                topological_sort(g,x,Visited,S);
        }
        
        S.push(u);
    }
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
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) 
    {
        vector< vector<int> > graph(numCourses);
        for(auto it: prerequisites)
        {
            graph[it.second].push_back(it.first);
        }
        vector<int> out;
        stack<int>S;
        bool Visited[numCourses];bool path[numCourses];
        
        for(int i=0;i<numCourses;i++) Visited[i]=false,path[i]=false;
        
        for(int i=0;i<numCourses;i++)
            if(!Visited[i] && checkcycle(graph,i,Visited,path))
                return out;
        
        for(int i=0;i<numCourses;i++) Visited[i]=false;
        
        for(int i=0;i<numCourses;i++)
        {
            if ( Visited[i] == false)
                topological_sort(graph,i,Visited,S);
        }
        
        
        while(S.empty() == false)
        { 
            out.push_back(S.top()); 
            S.pop();
            
        }
        
        return out;    
    }
};
