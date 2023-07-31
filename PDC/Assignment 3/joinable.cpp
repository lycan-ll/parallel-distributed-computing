#include <iostream>
#include <thread>
#include <vector>

using namespace std;

void print_hello(int no) {
    cout << "Hello from thread "<< no << endl;
}

int main() {
    vector<thread> threads;
    int no_threads;
    cout << "ENTER THE NO OF THREADS ";
    cin >> no_threads;

    for (int i = 0; i < no_threads; i++) {
        threads.push_back(thread(print_hello,i));
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}