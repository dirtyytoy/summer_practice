#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    
    vector<int> prices = {a1, a2, a3};
    vector<int> capacities = {b1, b2, b3};
    
    sort(prices.begin(), prices.end(), greater<int>());
    sort(capacities.begin(), capacities.end(), greater<int>());
    
    int total = 0;
    for (int i = 0; i < 3; i++) {
        total += prices[i] * capacities[i];
    }
    
    cout << total;
    return 0;
}