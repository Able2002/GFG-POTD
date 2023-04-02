class Solution {
public:
    int minimizeComputers(int n, int k, vector<int>& arr) {
        int lo = 1;
        int hi = n;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            priority_queue<int, vector<int>, greater<int>> pq; // min-heap
            for (int i = 0; i < mid; i++) {
                pq.push(0); // initialize all computers to have 0 time
            }
            bool possible = true;
            for (int i = 0; i < n; i++) {
                int curr_time = pq.top();
                pq.pop();
                curr_time += arr[i];
                if (curr_time > k) {
                    possible = false;
                    break;
                }
                pq.push(curr_time);
            }
            if (possible) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};
