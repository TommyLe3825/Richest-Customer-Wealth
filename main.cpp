#include <vector>

class Solution {
public:
    int maximumWealth(const std::vector<std::vector<int>>& accounts) {
        int maxWealth = 0;

        for (const std::vector<int>& account : accounts) {
            // Calculate the sum of wealth for each account
            int accountWealth = 0;
            for (int wealth : account) {
                accountWealth += wealth;
            }

            // Update maxWealth if the current account has more wealth
            if (accountWealth > maxWealth) {
                maxWealth = accountWealth;
            }
        }

        return maxWealth;
    }
};
