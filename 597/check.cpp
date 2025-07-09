#include "testlib.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    int r1 = inf.readInt(1, 1000000000, "r1");
    inf.readSpace();
    int r2 = inf.readInt(1, 1000000000, "r2");
    inf.readSpace();
    int r3 = inf.readInt(1, 1000000000, "r3");
    inf.readEoln();
    inf.readEof();
    bool possible = false;
    if (r2 + r3 <= r1 && max(r2, r3) <= r1 - min(r2, r3)) {
        possible = true;
    }
    string ans = ouf.readToken("YES|NO", "answer");
    ouf.readEoln();
    ouf.readEof();
    string expected = possible ? "YES" : "NO";
    if (ans == expected) {
        quitf(_ok, "Correct answer: %s", ans.c_str());
    } else {
        quitf(_wa, "Incorrect answer: expected %s, found %s", expected.c_str(), ans.c_str());
    }
    return 0;
}