#include "testlib.h"

using namespace std;

void writeTest(int test, int tc, int minn, int maxn) {
    startTest(test);

    println(tc);
    while(tc--){
        int a = rnd.next(minn, maxn);
        println(a);
    }
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);
    
    int test_start = opt<int>("test-start");
    int test_count = opt<int>("test-count");
    int max_t = opt<int>("max_t"); 
    int maxn = opt<int>("max");
    int minn = opt<int>("min", 1);
    
    
    for(int i = 0; i <= test_count; ++i)
        writeTest(i+test_start, max_t, minn, maxn);
}
