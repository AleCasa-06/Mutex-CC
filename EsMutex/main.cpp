#include <iostream>
#include "thread"

using namespace std;

int n = 0;

int Aumenta(){
    n++;
    cout << to_string(n) << endl;
    return n;
}


int main() {

    thread arr[10];

    for(int i = 0; i < 10; i++){
        arr[i] = thread(Aumenta);

    }
    for(int i = 0; i < 10; i++){
        arr[i].join();
    }
    return 0;
}
