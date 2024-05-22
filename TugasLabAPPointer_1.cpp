#include <iostream>
using namespace std;

int main() {
    system ("cls");
    int numbers[10]; 
    int *ptr = numbers; 

    for (int i = 0, value = 1; i < 10; ++i, value += 2) {
        *(ptr + i) = value;
    }

    cout << "Bilangan ganjil dari 1 sampai 20 beserta alamat memorinya:\n";
    for (int i = 0; i < 10; ++i) {
    cout << "Bilangan: " << *(ptr + i) << ", Alamat memori: " << (ptr + i) <<endl;
    }

    return 0;
}
