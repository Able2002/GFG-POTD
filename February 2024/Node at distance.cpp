class Solution
{
    int count = 0;
    void solve(Node *root, int k, vector<int> &visit)
    {
        if (!root)
            return;
        visit.push_back(0);
        if (!(root->left) && !(root->right))
        {
            if (k < visit.size() && visit[visit.size() - 1 - k] == 0)
            {
                visit[visit.size() - 1 - k] = 1;
                count++;
            }
        }
        solve(root->left, k, visit);
        solve(root->right, k, visit);
        visit.pop_back();
        return;
    }

public:
    // Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node *root, int k)
    {
        // Add your code here.
        vector<int> visit;
        solve(root, k, visit);
        return count;
    }
};
