#include "testlib.h"
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    
    int test_id = opt<int>("test");
    const int MAX_VAL = 100;
    int a1 = rnd.next(1, MAX_VAL);
    int a2 = rnd.next(1, MAX_VAL);
    int a3 = rnd.next(1, MAX_VAL);
    int b1 = rnd.next(1, MAX_VAL);
    int b2 = rnd.next(1, MAX_VAL);
    int b3 = rnd.next(1, MAX_VAL);
    if (test_id % 5 == 0) {
        if (rnd.next(0, 1)) a2 = a1;
        if (rnd.next(0, 1)) b3 = b2;
    }

    cout << a1 << " " << a2 << " " << a3 << " "
         << b1 << " " << b2 << " " << b3 << endl;
    return 0;
}