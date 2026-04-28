#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

const int BUFFER_SIZE = 3;

int buffer[BUFFER_SIZE];
int in = 0, out = 0, count = 0;
int item = 1;

void producer() {
    while (item <= 5) {
        if (count < BUFFER_SIZE) {
            buffer[in] = item;
            cout << "Produced: " << item << endl;
            in = (in + 1) % BUFFER_SIZE;
            count++;
            item++;

            if (count == BUFFER_SIZE)
                cout << "Buffer Full! Producer waiting..." << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(200));
    }
}

void consumer() {
    int consumed = 0;
    while (consumed < 5) {
        if (count > 0) {
            cout << "Consumed: " << buffer[out] << endl;
            out = (out + 1) % BUFFER_SIZE;
            count--;
            consumed++;

            if (count == 0)
                cout << "Buffer Empty! Consumer waiting..." << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(300));
    }
}

int main() {
    thread p(producer);
    thread c(consumer);

    p.join();
    c.join();

    return 0;
}