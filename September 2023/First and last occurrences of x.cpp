class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int firstOccurrence = -1;
        int lastOccurrence = -1;

        int left = 0;
        int right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                firstOccurrence = mid;
                right = mid - 1; 
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        left = 0;
        right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == x) {
                lastOccurrence = mid;
                left = mid + 1;
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        std::vector<int> result;
        result.push_back(firstOccurrence);
        result.push_back(lastOccurrence);
        return result;
    }
};
