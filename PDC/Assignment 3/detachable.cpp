#include <iostream>
#include <thread>

using namespace std;

void hello(int no) {
    cout << "Hello from thread "<< no <<endl<< endl;
}

int main() {
    
    thread t1(hello,1);
    t1.detach();  
    thread t2(hello,2);
    t2.detach();
    thread t3(hello,3);
    t3.detach();  
    thread t4(hello,4);
    t4.detach();  


    return 0;
}