class Solution {
public:
    bool isPossible(int arr[], int N, int K, long long mid) {
        int count = 1;
        long long sum = 0;

        for (int i = 0; i < N; i++) {
            sum += arr[i];
            if (sum > mid) {
                count++;
                sum = arr[i];
            }
        }

        return count <= K;
    }

    int splitArray(int arr[], int N, int K) {
        long long low = *max_element(arr, arr + N);
        long long high = accumulate(arr, arr + N, 0LL);
        long long result = -1;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (isPossible(arr, N, K, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return result;
    }
};
//GFG-POTD[7/01/2024] C++
//Github: Able2002
