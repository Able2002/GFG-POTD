class Solution {
public:
    std::string reverseWord(std::string s) {
        std::string reversed = s;
        std::reverse(reversed.begin(), reversed.end());
        return reversed;
    }
};
