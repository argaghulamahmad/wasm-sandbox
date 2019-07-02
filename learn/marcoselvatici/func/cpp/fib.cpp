#include <iostream>
#include <map>

using namespace std;

int mem_fact (int i, std::map<int, int>& m) {

    // if value with key == i does not exist in m: calculate it
    if (m.find(i) == m.end()) {

        // the recursive calls are made only if the value doesn't already exist
        m[i] = mem_fact (i - 1, m) + mem_fact (i - 2, m);
    }

    // if value with key == i exists, return the corresponding value
    return m[i];
}

int fast_factorial (int i) {
    // key (Fibonacci index) - value (Fibbonaci number)
    std::map<int, int> memo;

    // initialize the first two Fibonacci numbers
    memo.insert(std::pair<int,int>(0, 0));
    memo.insert(std::pair<int,int>(1, 1));

    return mem_fact(i, memo);
}

int main() {
    int fast_fib = fast_factorial(10);
    cout << fast_fib << endl;
}