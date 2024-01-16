class Solution {
public:
    vector<vector<int>> uniquePerms(vector<int> &arr, int n) {
        vector<vector<int>> result;
        vector<int> currentPerm;
        vector<bool> used(n, false);

        sort(arr.begin(), arr.end());  
        generateUniquePerms(arr, used, currentPerm, result);
        return result;
    }

private:
    void generateUniquePerms(const vector<int> &arr, vector<bool> &used, vector<int> &currentPerm, vector<vector<int>> &result) {
        if (currentPerm.size() == arr.size()) {
            result.push_back(currentPerm);
            return;
        }

        for (int i = 0; i < arr.size(); ++i) {
            if (!used[i]) {
                // Skip duplicates to avoid generating the same permutation multiple times
                if (i > 0 && arr[i] == arr[i - 1] && !used[i - 1]) continue;

                used[i] = true;
                currentPerm.push_back(arr[i]);
                generateUniquePerms(arr, used, currentPerm, result);
                currentPerm.pop_back();
                used[i] = false;
            }
        }
    }
};
