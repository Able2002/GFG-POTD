class Solution {
  public:
    long long acceptTheChallenge(int n) {
        if (n <= 2 || (n & (n - 1)) == 1) {
            // If n is less than or equal to 2 or not a power of 2 plus 1,
            // there is no solution, so return -1
            return -1;
        }
        // Start with the largest possible value of x
        long long x = n / 2;
        while (x > 0) {
            long long score = x;
            long long temp = x;
            while (score < n) {
                temp *= 2;
                score += temp;
            }
            if (score == n) {
                // If the score is equal to n, return the value of x
                return x;
            }
            x--;
        }
        // If no solution was found, return -1
        return -1;
    }
};
