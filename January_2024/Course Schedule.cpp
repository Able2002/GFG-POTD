class Solution
{
public:
  vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites)
  {
    vector<int> inDegree(n, 0);
    vector<vector<int>> adjList(n, vector<int>());

    for (auto pre : prerequisites)
    {
      adjList[pre[1]].push_back(pre[0]);
      inDegree[pre[0]]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
      if (inDegree[i] == 0)
      {
        q.push(i);
      }
    }

    vector<int> result;
    while (!q.empty())
    {
      int current = q.front();
      q.pop();
      result.push_back(current);

      for (int neighbor : adjList[current])
      {
        inDegree[neighbor]--;
        if (inDegree[neighbor] == 0)
        {
          q.push(neighbor);
        }
      }
    }

    if (result.size() != n)
    {
      // Not all tasks can be completed
      return {};
    }

    return result;
  }
}
