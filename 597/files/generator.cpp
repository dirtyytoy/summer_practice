#include "testlib.h"
#include <algorithm>

using namespace std;

void generateTest(int testType) {
    int r1, r2, r3;
    
    switch(testType) {
        case 1:  // Случайные валидные тесты
            r1 = rnd.next(100, 1000000000);
            r2 = rnd.next(1, r1 - 1);
            r3 = rnd.next(1, r1 - r2);
            break;
            
        case 2:  // Случайные невалидные тесты
            r1 = rnd.next(100, 1000000000);
            r2 = rnd.next(1, r1);
            r3 = rnd.next(r1 - r2 + 1, r1);
            break;
            
        case 3:  // Граничные случаи (малые значения)
            r1 = rnd.next(1, 100);
            r2 = rnd.next(1, r1);
            r3 = rnd.next(1, r1);
            break;
            
        case 4:  // Максимальные значения
            r1 = 1000000000;
            r2 = rnd.next(1, r1);
            r3 = rnd.next(1, r1);
            break;
            
        case 5:  // Касающиеся круги
            r1 = rnd.next(100, 1000000000);
            r2 = rnd.next(1, r1 - 1);
            r3 = r1 - r2;
            break;
    }
    
    cout << r1 << " " << r2 << " " << r3 << endl;
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int testType = atoi(argv[1]);
    generateTest(testType);
    return 0;
}