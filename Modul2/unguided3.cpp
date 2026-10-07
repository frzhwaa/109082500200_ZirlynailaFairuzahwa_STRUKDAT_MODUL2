#include <iostream>
using namespace std;

int maksimum(int arr[], int n);
int minimum(int arr[], int n);
void rataRata(int arr[], int n, float &rata);
int main(){
    int arrA[10] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    int hasil;
    float rata;
    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. cari nilai maksimum" << endl;
    cout << "3. cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata - rata" << endl;
    cout << "Pilih menu : ";
    cin >> pilihan;
    if(pilihan == 1){
        cout << "Isi array : ";
        for(int i = 0; i < 10; i++){
            cout << arrA[i] << " ";
        }
        cout << endl;
    }
    else if(pilihan == 2){
        hasil = maksimum(arrA, 10);
        cout << "Nilai maksimum = " << hasil << endl;
    }
    else if(pilihan == 3){
        hasil = minimum(arrA, 10);
        cout << "Nilai minimum = " << hasil << endl;
    }
    else if(pilihan == 4){
        rataRata(arrA, 10, rata);
        cout << "Nilai rata - rata = " << rata << endl;
    }
    else{
        cout << "Pilihan tidak tersedia." << endl;
    }
    return 0;
}

int maksimum(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int minimum(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void rataRata(int arr[], int n, float &rata){
    int jumlah = 0;
    for(int i = 0; i < n; i++){
        jumlah = jumlah + arr[i];
    }
    rata = (float)jumlah / n;
}