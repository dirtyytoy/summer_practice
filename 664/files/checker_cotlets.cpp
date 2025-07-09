#include "testlib.h"
#include <iostream>
#include <algorithm>
using namespace std;

int calculateExpectedTime(int k, int m, int n) {
    if (n <= k) {
        return 2 * m;
    } 
    else if (n * 2 % k == 0) {
        return (m * (n * 2 / k));
    }
    else {
        return (m * (1 + (n * 2 / k)));
    }
}

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    
    int k = inf.readInt(1, 30000, "k");
    inf.readSpace();
    int m = inf.readInt(1, 30000, "m");
    inf.readSpace();
    int n = inf.readInt(1, 30000, "n");
    inf.readEoln();
    inf.readEof();

    int expected = calculateExpectedTime(k, m, n);
    int contestant = ouf.readInt(0, 1000000000, "contestant's output");
    ouf.readEoln();
    ouf.readEof();

    if (contestant == expected) {
        quitf(_ok, "Correct answer: %d", contestant);
    } else {
        quitf(_wa, "Incorrect answer: expected %d, found %d", expected, contestant);
    }
    
    return 0;
}