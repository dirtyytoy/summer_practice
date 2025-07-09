#include "testlib.h"
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    int a1 = inf.readInt(1, 100, "A1");
    inf.readSpace();
    int a2 = inf.readInt(1, 100, "A2");
    inf.readSpace();
    int a3 = inf.readInt(1, 100, "A3");
    inf.readSpace();
    int b1 = inf.readInt(1, 100, "B1");
    inf.readSpace();
    int b2 = inf.readInt(1, 100, "B2");
    inf.readSpace();
    int b3 = inf.readInt(1, 100, "B3");
    inf.readEoln();
    inf.readEof();
    int participant_answer = ouf.readInt(0, 100000, "participant's answer");
    ouf.readEoln();
    ouf.readEof();
    vector<int> prices = {a1, a2, a3};
    vector<int> capacities = {b1, b2, b3};
    sort(prices.begin(), prices.end(), greater<int>());
    sort(capacities.begin(), capacities.end(), greater<int>());
    
    int correct_answer = 0;
    for (int i = 0; i < 3; i++) {
        correct_answer += prices[i] * capacities[i];
    }
    if (participant_answer == correct_answer) {
        quitf(_ok, "Correct answer: %d", participant_answer);
    } else {
        quitf(_wa, "Incorrect answer: expected %d, found %d", correct_answer, participant_answer);
    }
    
    return 0;
}