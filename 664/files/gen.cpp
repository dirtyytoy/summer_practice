#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int test_id = opt<int>("test");
    
    if (test_id == 1) println("1 1 1");
    else if (test_id == 2) println("2 2 1"); 
    else if (test_id == 3) println("1 1 2");
    else if (test_id == 4) println("3 5 4");
    else if (test_id == 5) println("5 10 7");
    else if (test_id == 6) println("10 1 20");
    else if (test_id == 7) println("100 1 1");
    else if (test_id == 8) println("100 50 1");
    else if (test_id == 9) println("30000 30000 30000");
    else if (test_id == 10) println("29999 29999 30000");
    else {
        int k = rnd.next(1, 30000);
        int m = rnd.next(1, 30000);
        int n = rnd.next(1, 30000);
        println(k, m, n);
    }
    return 0;
}