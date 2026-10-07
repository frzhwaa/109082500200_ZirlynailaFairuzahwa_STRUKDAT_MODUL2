# <h1 align="center">Laporan Praktikum Modul 2 - PENGENALAN BAHASA C++ (BAGIAN KEDUA)</h1>

<p align="center">Zirlynaila Fairuzahwa - 109082500200</p>

## Dasar Teori

Array, pointer, fungsi, prosedur, dan parameter merupakan konsep dasar dalam pemrograman C++ yang digunakan untuk menyimpan, mengakses, dan mengolah data serta membentuk program menjadi bagian-bagian yang lebih terstruktur. Pemahaman terhadap konsep tersebut penting dalam pembelajaran pemrograman C++ karena berkaitan dengan pengelolaan data dan pembuatan program secara terstruktur [1].

### A. Array<br/>

Array merupakan kumpulan data dengan nama yang sama dan setiap elemennya memiliki tipe data yang sama. Setiap elemen array dapat diakses menggunakan indeks. Dalam C++, array dapat memiliki satu dimensi, dua dimensi, maupun lebih dari dua dimensi. Array satu dimensi menggunakan satu indeks, sedangkan array dua dimensi menggunakan dua indeks dan dapat digunakan untuk menyimpan data dalam bentuk tabel. Array berdimensi banyak menggunakan lebih dari dua indeks sesuai dengan jumlah dimensinya.

#### 1. Array Satu Dimensi
Array satu dimensi merupakan array yang hanya memiliki satu larik data. Deklarasinya menggunakan bentuk tipe_data nama_var[ukuran]. Elemen array disimpan secara berurutan dan indeks pertama dimulai dari 0. [1]

#### 2. Array Dua Dimensi dan Berdimensi Banyak
Array dua dimensi memiliki dua indeks dan dapat digunakan untuk menyimpan data berbentuk tabel. Sementara itu, array berdimensi banyak memiliki lebih dari dua indeks sehingga dapat digunakan untuk menyimpan data dengan struktur yang lebih kompleks.

### B. Pointer dan String<br/>

Pointer merupakan variabel yang digunakan untuk menyimpan alamat memori dari variabel lain. Alamat suatu variabel dapat diperoleh menggunakan operator &, sedangkan operator * dapat digunakan untuk mengakses nilai yang ditunjuk oleh pointer. Pointer juga memiliki hubungan dengan array karena pointer dapat menunjuk alamat elemen array dan digunakan untuk mengakses elemen-elemen tersebut.

String merupakan data yang digunakan untuk menyimpan teks atau kumpulan karakter. Dalam C++, string dapat direpresentasikan sebagai array karakter yang diakhiri dengan karakter null \0. Setiap karakter dapat diakses menggunakan indeks, sedangkan pointer karakter dapat digunakan untuk menunjuk karakter pada string.

#### 1. Pointer dan Array
Pointer dapat menunjuk ke elemen pertama array dan digunakan untuk mengakses elemen berikutnya melalui operasi pointer. Jika pointer menunjuk ke a[0], maka *(pa + 1) dapat digunakan untuk mengakses isi a[1].

#### 2. String dan Pointer
String pada dasarnya merupakan kumpulan karakter. Array karakter dan pointer karakter memiliki hubungan dalam penyimpanan dan pengaksesan string. Array karakter menyimpan karakter secara langsung, sedangkan pointer dapat menunjuk ke karakter pertama dari suatu string.

### C. Fungsi, Prosedur, dan Parameter<br/>

Fungsi merupakan blok kode yang dibuat untuk menjalankan tugas tertentu. Penggunaan fungsi dapat membuat program lebih terstruktur dan mengurangi pengulangan kode. Fungsi dapat menerima masukan melalui parameter dan dapat mengembalikan nilai melalui return. Sementara itu, prosedur dalam C++ dapat diterapkan menggunakan fungsi bertipe void, yaitu fungsi yang menjalankan tugas tertentu tetapi tidak mengembalikan nilai.

Parameter fungsi dibedakan menjadi parameter formal dan parameter aktual. Parameter formal merupakan variabel yang dituliskan ketika fungsi didefinisikan, sedangkan parameter aktual merupakan nilai atau variabel yang diberikan ketika fungsi dipanggil. Parameter dapat dilewatkan dengan beberapa cara, yaitu call by value, call by pointer, dan call by reference. Pada call by value, nilai parameter disalin sehingga perubahan di dalam fungsi tidak mengubah variabel asli. Pada call by pointer dan call by reference, fungsi dapat mengubah nilai variabel yang berada di luar fungsi.

#### 1. Fungsi dan Prosedur
Fungsi digunakan untuk menjalankan tugas tertentu dan dapat menghasilkan nilai keluaran, sedangkan prosedur atau fungsi void digunakan untuk menjalankan tugas tanpa mengembalikan nilai. [1]

#### 2. Parameter Fungsi
Parameter digunakan untuk memberikan data kepada fungsi. Parameter formal berada pada definisi fungsi, sedangkan parameter aktual diberikan saat fungsi dipanggil. [1]

#### 3. Cara Melewatkan Parameter
Parameter dapat dilewatkan menggunakan call by value, call by pointer, atau call by reference. Perbedaan ketiganya terletak pada cara data diberikan kepada fungsi dan apakah perubahan nilai di dalam fungsi dapat memengaruhi variabel asal.

## Guided

### 1. Pointer dan Array

```C++
#include <iostream>
#define MAX 5
using namespace std;

int main(){
    int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX]=
    {
        {0,2,2,0,0},
        {0,1,1,1,0},
        {0,3,3,3,0},
        {4,4,0,0,4},
        {5,0,0,0,5}
    };
    for (i=0; i<MAX; i++){
        cout<<"Masukkan nilai ke-"<<i+1<<endl;
        cin>>nilai[i];
    }
    cout<<"\ndata nilai siswa :\n";
    for (i=0; i<MAX; i++)
        cout<<"nilai k-"<<i+1<<"=" <<nilai[i]<<endl;
    cout<<"\n nilai tahunan : \n";
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++)
            cout<<nilai_tahun[i][j];
        cout<<"\n";
    }
    return 0;
}
```

Program tersebut digunakan untuk menginputkan lima buah nilai siswa dan menampilkan data nilai tersebut serta data nilai tahunan yang disimpan dalam array 2 dimensi. Program menggunakan konstanta MAX dengan nilai 5, sehingga array nilai memiliki lima elemen dan array nilai_tahun memiliki ukuran 5 × 5. Pertama, program meminta pengguna untuk memasukkan lima nilai menggunakan perulangan for, kemudian setiap nilai yang dimasukkan disimpan ke dalam array nilai[i]. Setelah semua nilai dimasukkan, program menampilkan kembali data nilai siswa dengan mengakses setiap elemen array nilai menggunakan perulangan for. Selanjutnya, program menampilkan isi array 2 dimensi nilai_tahun menggunakan dua perulangan for, yaitu perulangan pertama untuk baris dan perulangan kedua untuk kolom. Setiap elemen pada nilai_tahun[i][j] kemudian ditampilkan ke layar.

### 2. Pointer

```C++
#include <iostream>
using namespace std;

int main(){
    int x, y; 
    int *px;
    
    x = 87;
    px = &x;
    y= *px;

    cout<< "Alamat x= " << &x << endl;
    cout<< "Isi px= " << px << endl;
    cout<< "Isi X= " << x << endl;
    cout<< "Nilai yang ditunjuk px= " << *px << endl;
    cout<< "Nilai y= " << y << endl;
    
    return 0;
}
```

Program tersebut digunakan untuk menunjukkan penggunaan pointer dalam menyimpan alamat dan mengakses nilai dari suatu variabel. Pada awal program, terdapat variabel x, y, dan pointer px yang bertipe int. Variabel x diberi nilai 87, kemudian px = &x digunakan untuk menyimpan alamat dari variabel x ke dalam pointer px. Selanjutnya, y = *px digunakan untuk mengambil nilai yang ditunjuk oleh px, sehingga nilai y menjadi sama dengan nilai x, yaitu 87. Setelah itu, program menampilkan alamat dari x menggunakan &x, isi px yang berisi alamat dari x, nilai x, nilai yang ditunjuk oleh px menggunakan *px, serta nilai y.

### 3. Fungsi

```C++
#include <iostream>
using namespace std;
int maks3(int a, int b, int c);
int main(){
    int x,y,z;
    cout<<"masukkan nilai bilangan ke-1 =";
    cin>>x;
    cout<<"masukkan nilai bilangan ke-2 =";
    cin>>y;
    cout<<"masukkan nilai bilangan ke-3 =";
    cin>>z;
    cout<<"nilai maksimumnya adalah =" << maks3(x,y,z);
    return 0;
}
int maks3(int a, int b, int c){
    int temp_max = a;
    if(b > temp_max)
    temp_max = b;
    if(c > temp_max)
    temp_max = c;
    return (temp_max);
}
```

Program tersebut digunakan untuk mencari nilai maksimum dari tiga buah bilangan yang dimasukkan oleh pengguna. Pada awal program terdapat prototype fungsi maks3(int a, int b, int c) yang digunakan untuk mendeklarasikan fungsi maks3 sebelum fungsi tersebut dipanggil di dalam main. Program kemudian meminta pengguna untuk menginputkan tiga bilangan yang disimpan ke dalam variabel x, y, dan z. Setelah ketiga nilai dimasukkan, program memanggil fungsi maks3(x,y,z) untuk mencari nilai terbesar dari ketiga bilangan tersebut. Di dalam fungsi maks3, nilai a terlebih dahulu disimpan ke dalam variabel temp_max sebagai nilai maksimum sementara. Selanjutnya, nilai b dibandingkan dengan temp_max, jika b lebih besar maka temp_max diganti dengan nilai b. Setelah itu, nilai c juga dibandingkan dengan temp_max, jika c lebih besar maka temp_max diganti dengan nilai c. Setelah semua perbandingan selesai, fungsi mengembalikan nilai temp_max menggunakan return.

### 4. Prosedur

```C++
#include <iostream>
using namespace std;

void tulis(int x);
int main() {
    int jum;
    cout << "jumlah baris kata = ";
    cin >> jum;
    tulis(jum);
    return 0;
}

void tulis(int x){
    for (int i=0; i<x; i++)
    cout << "baris ke-" << i+1 << endl;
}
```

Program tersebut digunakan untuk menampilkan beberapa baris tulisan berdasarkan jumlah baris yang dimasukkan oleh pengguna. Pada awal program terdapat prototype prosedur void tulis(int x) yang digunakan untuk mendeklarasikan prosedur sebelum dipanggil di dalam main. Program kemudian meminta pengguna untuk memasukkan jumlah baris kata yang disimpan ke dalam variabel jum. Setelah nilai jum dimasukkan, program memanggil prosedur tulis(jum) untuk menjalankan proses penampilan baris. Di dalam prosedur tulis, terdapat perulangan for yang dimulai dari i = 0 dan akan terus berjalan selama i < x. Setiap perulangan akan menampilkan tulisan "baris ke-" diikuti dengan i+1. Karena prosedur menggunakan void, prosedur tersebut tidak mengembalikan nilai kepada program utama.

### 5. Parameter Fungsi

```C++
#include <iostream>
using namespace std;

void tukarValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void tukarPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void tukarReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4, b = 6;

    tukarValue(a, b);
    cout << "Setelah call by Value     -> a = " << a << ", b = " << b << " (Tetap)" << endl;

    tukarPointer(&a, &b);
    cout << "Setelah call by Pointer   -> a = " << a << ", b = " << b << " (Berubah!)" << endl;

    tukarReference(a, b);
    cout << "Setelah call by Reference -> a = " << a << ", b = " << b << " (Berubah lagi!)" << endl;

    return 0;
}
```

Program tersebut digunakan untuk menunjukkan perbedaan antara call by value, call by pointer, dan call by reference dalam menukar nilai dua variabel. Pada program terdapat tiga prosedur, yaitu tukarValue, tukarPointer, dan tukarReference. Prosedur tukarValue menerima parameter x dan y secara langsung, sehingga yang ditukar adalah nilai salinan dari a dan b. Oleh karena itu, perubahan yang terjadi di dalam prosedur tidak mengubah nilai a dan b pada main. Selanjutnya, prosedur tukarPointer menerima parameter berupa pointer int *x dan int *y. Saat dipanggil menggunakan tukarPointer(&a, &b), alamat a dan b diberikan kepada prosedur sehingga operator * dapat digunakan untuk mengakses dan mengubah nilai asli a dan b. Terakhir, prosedur tukarReference menggunakan parameter reference dengan int &x dan int &y. Saat dipanggil menggunakan tukarReference(a, b), parameter tersebut merujuk langsung pada variabel a dan b, sehingga perubahan nilai di dalam prosedur juga mengubah nilai variabel aslinya.

## Unguided

### 1. Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3x3.

```C++
source code unguided 1

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
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL2/blob/main/Modul2/output/soal1.png)

Program tersebut digunakan untuk melakukan tiga operasi pada dua buah matriks berukuran 3×3, yaitu penjumlahan, pengurangan, dan perkalian matriks. Program menggunakan konstanta N dengan nilai 3 sehingga array A, B, tambah, kurang, dan kali masing-masing memiliki ukuran 3×3. Pertama, program meminta pengguna untuk memasukkan sembilan elemen matriks A menggunakan dua perulangan for, yaitu perulangan pertama untuk menentukan baris dan perulangan kedua untuk menentukan kolom. Setelah itu, program melakukan hal yang sama untuk memasukkan sembilan elemen matriks B. Selanjutnya, program melakukan penjumlahan dan pengurangan dengan mengambil elemen pada posisi baris dan kolom yang sama, yaitu A[i][j] + B[i][j] untuk penjumlahan dan A[i][j] - B[i][j] untuk pengurangan, kemudian hasilnya disimpan ke dalam array tambah dan kurang. Untuk perkalian matriks, program menggunakan tiga perulangan for. Variabel i digunakan untuk menentukan baris matriks A, j untuk menentukan kolom matriks B, dan k digunakan untuk menghitung perkalian setiap elemen yang diperlukan. Hasil perkalian kemudian disimpan ke dalam array kali. Setelah seluruh proses selesai, program menampilkan hasil penjumlahan, pengurangan, dan perkalian matriks ke layar.

Sebagai contoh, ketika matriks A yang dimasukkan adalah 1 2 3, 4 5 6, 7 8 9 dan matriks B adalah 9 8 7, 6 5 4, 3 2 1, maka hasil penjumlahannya adalah 10 10 10, 10 10 10, dan 10 10 10. Hasil pengurangannya adalah -8 -6 -4, -2 0 2, dan 4 6 8. Untuk perkalian matriks, program menghitung setiap elemen hasil berdasarkan perkalian elemen pada baris matriks A dengan elemen pada kolom matriks B, sehingga menghasilkan 30 24 18, 84 69 54, dan 138 114 90. Setelah semua operasi selesai, ketiga hasil tersebut ditampilkan dengan keterangan "Hasil Penjumlahan Matriks", "Hasil Pengurangan Matriks", dan "Hasil Perkalian Matriks".

### 2. Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat menukar nilai dari 3 variabel.

```C++
source code unguided 2A

#include <iostream>
using namespace std;

void tukar(int *x, int *y, int *z);

int main(){
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;
    cout << "Nilai sebelum ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    tukar(&x, &y, &z);
    cout << "\nNilai setelah ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}

void tukar(int *x, int *y, int *z){
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
```

### Output Unguided 2A :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL2/blob/main/Modul2/output/soal2A.png)

Program tersebut digunakan untuk menukar nilai dari tiga buah variabel menggunakan pointer. Pada awal program terdapat void tukar(int *x, int *y, int *z) yang menunjukkan bahwa prosedur tukar menerima tiga parameter berupa pointer bertipe int. Di dalam main, terdapat tiga variabel yaitu x,y, dan z yang masing-masing diberi nilai 10, 20, dan 30. Nilai tersebut kemudian ditampilkan sebagai nilai sebelum ditukar. Setelah itu, program memanggil prosedur tukar(&x, &y, &z) dengan mengirimkan alamat dari ketiga variabel menggunakan operator &. Di dalam prosedur tukar, variabel temp digunakan sebagai tempat penyimpanan sementara. Nilai yang ditunjuk oleh z disimpan ke temp, kemudian nilai yang ditunjuk oleh y dipindahkan ke z, nilai yang ditunjuk oleh x dipindahkan ke y, dan nilai yang sebelumnya disimpan di temp dipindahkan ke x. Karena parameter yang diberikan berupa alamat, perubahan tersebut langsung memengaruhi nilai asli x, y, dan z. Setelah prosedur selesai, program menampilkan nilai ketiga variabel setelah ditukar.

Sebagai contoh, sebelum proses pertukaran dilakukan, nilai x = 10, y = 20, dan z = 30. Ketika prosedur tukar(&x, &y, &z) dijalankan, nilai z yaitu 30 terlebih dahulu disimpan ke dalam temp. Kemudian nilai y yaitu 20 dipindahkan ke z, sehingga z menjadi 20. Selanjutnya nilai x yaitu 10 dipindahkan ke y, sehingga y menjadi 10. Terakhir, nilai 30 yang tersimpan di temp dipindahkan ke x, sehingga x menjadi 30. Dengan demikian, setelah proses pertukaran selesai, nilai menjadi x = 30, y = 10, dan z = 20.

```C++
source code unguided 2B

#include <iostream>
using namespace std;

void tukar(int &x, int &y, int &z);

int main(){
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;
    cout << "Nilai sebelum ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    tukar(x, y, z);
    cout << "\nNilai setelah ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}

void tukar(int &x, int &y, int &z){
    int temp;
    temp = z;
    z = y;
    y = x;
    x = temp;
}
```

### Output Unguided 2B :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL2/blob/main/Modul2/output/soal2B.png)

Program tersebut digunakan untuk menukar nilai dari tiga buah variabel menggunakan reference. Pada awal program terdapat void tukar(int &x, int &y, int &z) yang menunjukkan bahwa prosedur tukar menerima tiga parameter berupa reference bertipe int. Di dalam main, terdapat tiga variabel yaitu x, y, dan z yang masing-masing diberi nilai 10, 20, dan 30. Nilai tersebut kemudian ditampilkan sebagai nilai sebelum ditukar. Setelah itu, program memanggil prosedur tukar(x, y, z) dengan langsung mengirimkan variabel x, y, dan z. Karena parameter pada prosedur menggunakan tanda &, parameter tersebut merujuk langsung pada variabel yang digunakan saat pemanggilan. Di dalam prosedur tukar, variabel temp digunakan sebagai tempat penyimpanan sementara. Nilai z disimpan ke dalam temp, kemudian nilai y dipindahkan ke z, nilai x dipindahkan ke y, dan nilai yang tersimpan di temp dipindahkan ke x. Setelah prosedur selesai, nilai x, y, dan z yang berada di main ikut berubah dan kemudian ditampilkan sebagai nilai setelah ditukar.

Sebagai contoh, sebelum proses pertukaran dilakukan, nilai x = 10, y = 20, dan z = 30. Ketika prosedur tukar(x, y, z) dijalankan, nilai z yaitu 30 terlebih dahulu disimpan ke dalam temp. Kemudian nilai y yaitu 20 dipindahkan ke z, sehingga z menjadi 20. Selanjutnya nilai x yaitu 10 dipindahkan ke y, sehingga y menjadi 10. Terakhir, nilai 30 yang tersimpan di temp dipindahkan ke x, sehingga x menjadi 30. Dengan demikian, setelah proses pertukaran selesai, program menampilkan nilai x = 30, y = 10, dan z = 20. Proses tersebut menunjukkan bahwa perubahan yang dilakukan pada parameter reference langsung memengaruhi variabel aslinya.

### 3. Diketahui sebuah array 1 dimensi sebagai berikut :
### arrA = {48, 2, 7 , 21, 5, 20, 77, 9, 10, 1}
### Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari array tersebut! Kerjakan soal dengan ketentuan :
### - Untuk mencari nilai minimum dan maksimum, harus dibuat menjadi sebuah function.
### - Untuk mencari rata-rata harus dibuat menjadi sebuah procedure.
### - Buat output di fungsi utama (main) untuk menampilkan nilai rata-rata yang sudah didapatkan melalui procedure sebelumnya. (Gunakan metode pass by reference atau pass by pointer)
### - Buat menu sederhana untuk menjalankan setiap procedure
### Tampilan menu
### --- Menu Program Array ---
### 1. Tampilkan isi array
### 2. cari nilai maksimum
### 3. cari nilai minimum
### 4. Hitung nilai rata - rata

```C++
source code unguided 3

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
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL2/blob/main/Modul2/output/soal3.png)

Program tersebut digunakan untuk menampilkan isi array, mencari nilai maksimum, mencari nilai minimum, dan menghitung nilai rata-rata dari sebuah array. Pada awal program terdapat tiga prototype, yaitu fungsi maksimum, fungsi minimum, dan prosedur rataRata. Array arrA berisi 10 nilai, yaitu 48, 2, 7, 21, 5, 20, 77, 9, 10, dan 1. Program kemudian menampilkan menu yang terdiri dari empat pilihan dan meminta pengguna memasukkan pilihan yang disimpan ke dalam variabel pilihan. Jika pengguna memilih menu 1, program menampilkan seluruh isi array menggunakan perulangan for. Jika memilih menu 2, program memanggil fungsi maksimum(arrA, 10) untuk mencari nilai terbesar dan hasilnya disimpan ke dalam variabel hasil. Jika memilih menu 3, program memanggil fungsi minimum(arrA, 10) untuk mencari nilai terkecil. Jika memilih menu 4, program memanggil prosedur rataRata(arrA, 10, rata) untuk menghitung nilai rata-rata, kemudian hasilnya ditampilkan melalui variabel rata.

Pada fungsi maksimum, nilai pertama array yaitu arr[0] digunakan sebagai nilai maksimum sementara. Selanjutnya, perulangan for membandingkan setiap elemen berikutnya dengan nilai max. Jika ditemukan nilai yang lebih besar, maka nilai max diperbarui dan setelah seluruh elemen diperiksa, fungsi mengembalikan nilai tersebut menggunakan return. Pada fungsi minimum, prosesnya hampir sama, tetapi setiap elemen dibandingkan untuk mencari nilai yang paling kecil. Sementara itu, prosedur rataRata menggunakan variabel jumlah untuk menjumlahkan seluruh elemen array menggunakan perulangan for. Setelah seluruh nilai dijumlahkan, hasilnya dibagi dengan jumlah elemen n dan disimpan ke dalam parameter reference rata, sehingga nilai tersebut dapat digunakan kembali di dalam main.

Sebagai contoh, ketika pengguna memilih menu 1, program akan menampilkan isi array yaitu 48 2 7 21 5 20 77 9 10 1. Jika pengguna memilih menu 2, fungsi maksimum akan membandingkan seluruh nilai dan menemukan bahwa nilai terbesar adalah 77, sehingga program menampilkan Nilai maksimum = 77. Jika pengguna memilih menu 3, fungsi minimum akan menemukan nilai terkecil yaitu 1, sehingga program menampilkan Nilai minimum = 1. Jika pengguna memilih menu 4, prosedur rataRata menjumlahkan seluruh nilai sehingga diperoleh 200, kemudian 200 dibagi dengan 10 dan menghasilkan rata-rata 20, sehingga program menampilkan Nilai rata - rata = 20.

## Kesimpulan

Pada praktikum Modul 2 Pengenalan Bahasa C++ (Bagian Kedua), dapat disimpulkan bahwa materi pada modul ini membantu saya dalam memahami penggunaan array, pointer, string, fungsi, prosedur, serta parameter pada bahasa C++. Array dapat digunakan untuk menyimpan sekumpulan data dalam satu variabel, sedangkan pointer dan reference dapat digunakan untuk mengakses atau mengubah nilai suatu variabel melalui alamat atau referensinya. Fungsi dan prosedur juga dapat digunakan untuk membagi program menjadi beberapa bagian sesuai dengan tugasnya.

Melalui tiga program unguided yang sudah saya kerjakan, saya memahami penerapan konsep tersebut dalam menyelesaikan permasalahan. Program pertama menerapkan array dua dimensi untuk melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3×3. Program kedua menerapkan pointer dan reference untuk menukar nilai dari tiga variabel. Program ketiga menerapkan array, fungsi, prosedur, serta pass by reference untuk menampilkan isi array, mencari nilai maksimum dan minimum, serta menghitung nilai rata-rata.

Praktikum ini membantu saya dalam memahami cara penggunaan array, pointer, reference, fungsi, prosedur, dan parameter dalam program C++. Selain memahami teori, saya juga dapat menerapkan konsep tersebut untuk membuat program yang dapat menyelesaikan permasalahan sesuai dengan kebutuhan yang diberikan.

## Referensi

[1] Dewi, Luh Joni Erawati. (2012). “Media Pembelajaran Bahasa Pemrograman C++.” Jurnal Pendidikan Teknologi dan Kejuruan, 7(1). Universitas Pendidikan Ganesha. https://doi.org/10.23887/jptk-undiksha.v7i1.31.
<br>
[2] Riyanda, A. R., & Suana, W. (2019). “Pengembangan Modul Pembelajaran Pemrograman Dasar Berbasis Adobe Flash CS6 Bagi Siswa Kelas XI RPL.” Jurnal Pendidikan Teknologi Informasi dan Vokasional, 1(2).