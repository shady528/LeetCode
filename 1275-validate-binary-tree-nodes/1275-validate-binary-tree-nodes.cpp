class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) 
    {
        unordered_map<int, vector<int>> adj;
        unordered_map<int, int> c_to_p;

        for(int i = 0; i<n; i++)
        {
            int node = i;
            int leftC = leftChild[i];
            int rightC = rightChild[i];

            if(leftC != -1)
            {
                adj[node].push_back(leftC);

                if(c_to_p.find(leftC) != c_to_p.end()) return false;

                else c_to_p[leftC] = node;
            }

            if(rightC != -1)
            {
                adj[node].push_back(rightC);

                if(c_to_p.find(rightC) != c_to_p.end()) return false;

                else c_to_p[rightC] = node;
            }
        }
        int root = -1;

        for(int i = 0; i<n; i++)
        {
            if(c_to_p.find(i) == c_to_p.end())
            {
                if(root != -1) return false;

                else root = i;
            }
        }

        if(root == -1) return false;

        vector<bool> vis(n,false);
        queue<int> q;
        int count = 1;
        q.push(root);
        vis[root] = true;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();

            for(int &child : adj[node])
            {
                if(!vis[child])
                {
                    vis[child] = true;
                    count++;
                    q.push(child);
                }
            }
        } 
        return count == n;
    }
};