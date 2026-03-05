#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <stdlib.h> // Untuk utilitas umum, tidak mutlak digunakan dalam kasus ini
#include <string.h> // Untuk manipulasi string, tidak mutlak digunakan dalam kasus ini

int main() {
    int n;          // Variabel untuk menyimpan jumlah nilai yang akan dimasukkan
    // Array untuk menyimpan nilai tugas mahasiswa.
    // Ukuran 100 diasumsikan cukup untuk N maksimum 100.
    // Jika N bisa lebih besar, pertimbangkan alokasi memori dinamis (malloc).
    int nilai[100];
    long long sum = 0; // Variabel untuk menjumlahkan seluruh nilai
    double average; // Variabel untuk menyimpan nilai rata-rata
    int count_above_average = 0; // Variabel baru untuk menghitung nilai >= rata-rata

    // Membaca bilangan bulat n dari input
    scanf("%d", &n);

    // Validasi sederhana untuk n agar tidak melebihi ukuran array statis
    if (n <= 0 || n > 100) {
        // Output error atau exit jika n tidak valid.
        // Untuk tujuan soal, kita asumsikan n akan valid.
        // fprintf(stderr, "Error: Jumlah nilai (n) harus antara 1 dan 100.\n");
        return 1; // Mengakhiri program dengan kode error
    }

    // Melakukan perulangan sebanyak n kali untuk membaca nilai tugas dan menyimpannya ke array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]); // Membaca setiap nilai tugas dan menyimpannya
        sum += nilai[i];       // Menambahkan nilai ke total
    }

    // Menghitung nilai rata-rata
    average = (double)sum / n;

    // Melakukan perulangan kedua untuk menghitung berapa banyak nilai yang di atas atau sama dengan rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai[i] >= average) {
            count_above_average++; // Menambah counter jika nilai memenuhi kriteria
        }
    }

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    // Menampilkan banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    return 0; // Menandakan program berakhir dengan sukses
}
