#include <iostream>
using namespace std;
#define N 3

int main() {
    int A[N][N], B[N][N];
    int tambah[N][N], kurang[N][N], kali[N][N];
    cout << "Masukkan elemen matriks A (3x3):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Masukkan elemen matriks B (3x3):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            kali[i][j] = 0;
            for (int k = 0; k < N; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nHasil Penjumlahan Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nHasil Pengurangan Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nHasil Perkalian Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}