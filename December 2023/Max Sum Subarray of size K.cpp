class Solution {
public:
long maximumSumSubarray(int K, vector<int> &Arr, int N) {
long currentSum = 0;


for (int i = 0; i < K; ++i) {
currentSum += Arr[i];
}
long maxSum = currentSum;

for (int i = K; i < N; ++i) {
currentSum = currentSum - Arr[i - K] + Arr[i];
maxSum = max(maxSum, currentSum);
}

return maxSum;
}
};

