#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int N;
    cin >> N;
    float a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    cout << massimo(a,N);
    return 0;
}
