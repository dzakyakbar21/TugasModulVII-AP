#include <iostream>
using namespace std;

void tambah(float* a, float* b, float* hasil) {
    *hasil = *a + *b;
}

void kurang(float* a, float* b, float* hasil) {
    *hasil = *a - *b;
}

void kali(float* a, float* b, float* hasil) {
    *hasil = (*a) * (*b);
}

void bagi(float* a, float* b, float* hasil) {
    if (*b != 0) {
        *hasil = *a / *b;
    } else {
        cout << "Error: Pembagian dengan nol!" << endl;
        *hasil = 0;
    }
}

int main() {
    system ("cls");
    float a, b, hasil;
    char operasi;

    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;

    cout << "Pilih operasi (+, -, *, /): ";
    cin >> operasi;

    float* pA = &a;
    float* pB = &b;
    float* pHasil = &hasil;

    switch (operasi) {
        case '+':
            tambah(pA, pB, pHasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '-':
            kurang(pA, pB, pHasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '*':
            kali(pA, pB, pHasil);
            cout << "Hasil: " << hasil << endl;
            break;
        case '/':
            bagi(pA, pB, pHasil);
            cout << "Hasil: " << hasil << endl;
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            break;
    }

    return 0;
}
