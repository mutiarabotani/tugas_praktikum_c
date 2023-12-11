#include <iostream>
using namespace std;

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N;
    bool ada = false;

    cout << "Masukkan bilangan integer: ";
    cin >> N;

    for (int i = 0; i < 11; i++) {
        if (A[i] == N) {
            ada = true;
            cout << "ADA" << endl;
            cout << "Lokasi bilangan yang sama: " << i << endl;
        }
    }

    if (!ada) {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

