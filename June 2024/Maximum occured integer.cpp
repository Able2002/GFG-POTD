class Solution {
public:
    int maxOccured(int n, int l[], int r[], int maxx) {
        vector<int> arr(maxx + 2, 0);

        for (int i = 0; i < n; i++) {
            arr[l[i]]++;
            if (r[i] + 1 <= maxx) {
                arr[r[i] + 1]--;
            }
        }

        int maxCount = 0, currentCount = 0, result = 0;
        for (int i = 0; i <= maxx; i++) {
            currentCount += arr[i];
            if (currentCount > maxCount) {
                maxCount = currentCount;
                result = i;
            }
        }

        return result;
    }
};

