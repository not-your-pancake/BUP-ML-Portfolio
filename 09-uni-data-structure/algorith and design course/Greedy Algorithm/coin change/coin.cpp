#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void findMinCoinsGreedy(vector<int>& coins, int amount) {
    // 1. Sort denominations in descending order (Largest to Smallest).
    // Greedy logic requires picking the biggest coin first to reduce the amount quickly.
    sort(coins.begin(), coins.end(), greater<int>());

    vector<int> result; // To store the actual coins used
    int totalCoins = 0;

    cout << "Target Amount: " << amount << endl;
    cout << "Steps taken:" << endl;

    // 2. Iterate through each denomination starting from the largest
    for (int i = 0; i < coins.size(); i++) {

        // 3. While the current coin can fit into the remaining amount
        while (amount >= coins[i]) {
            // Subtract the coin value from the remaining amount
            amount -= coins[i];

            // Record this coin in our result list
            result.push_back(coins[i]);
            totalCoins++;

            // Detailed log for each step
            cout << "  - Picked " << coins[i] << ", remaining amount: " << amount << endl;
        }

        // Optimization: If amount is already 0, we can stop early
        if (amount == 0) break;
    }

    // 4. Final Output
    if (amount == 0) {
        cout << "\nSuccess! Total coins used: " << totalCoins << endl;
        cout << "Coins: ";
        for (int coin : result) cout << coin << " ";
        cout << endl;
    } else {
        // If amount > 0 after checking all coins, greedy failed to find an exact solution.
        cout << "\nExact change could not be made with these denominations." << endl;
    }
}

int main() {
    // Standard denominations (Greedy usually works perfectly for these)
    vector<int> denominations = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int target = 93;

    findMinCoinsGreedy(denominations, target);

    return 0;
}
