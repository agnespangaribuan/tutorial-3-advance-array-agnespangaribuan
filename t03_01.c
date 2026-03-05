#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <stdlib.h> // Untuk utilitas umum, tidak mutlak digunakan dalam kasus ini
#include <string.h> // Untuk manipulasi string, tidak mutlak digunakan dalam kasus ini

int main() {
    int n;          // Variabel untuk menyimpan jumlah nilai yang akan dimasukkan
    int nilai;      // Variabel untuk menyimpan setiap nilai tugas mahasiswa
    long long sum = 0; // Variabel untuk menjumlahkan seluruh nilai, menggunakan long long untuk antisipasi skala
    double average; // Variabel untuk menyimpan nilai rata-rata

    // Membaca bilangan bulat n dari input
    scanf("%d", &n);

    // Melakukan perulangan sebanyak n kali untuk membaca nilai tugas
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai); // Membaca setiap nilai tugas
        sum += nilai;       // Menambahkan nilai ke total
    }

    // Menghitung nilai rata-rata
    // Melakukan type casting (double) pada sum agar hasil pembagian menjadi floating-point
    average = (double)sum / n;

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    return 0; // Menandakan program berakhir dengan sukses
}
