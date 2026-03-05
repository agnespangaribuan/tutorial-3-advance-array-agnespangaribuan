#include <stdio.h>  // Untuk fungsi input/output seperti scanf dan printf
#include <stdlib.h> // Untuk utilitas umum (tidak mutlak digunakan di sini, tapi diminta)
#include <string.h> // Untuk manipulasi string (tidak mutlak digunakan di sini, tapi diminta)

int main() {
    int n;          // Variabel untuk menyimpan jumlah nilai yang akan dimasukkan
    // Array untuk menyimpan nilai tugas mahasiswa.
    // Ukuran 100 diasumsikan cukup untuk N maksimum 100.
    // Jika N bisa lebih besar, pertimbangkan alokasi memori dinamis (malloc).
    int nilai[100];
    long long sum = 0; // Variabel untuk menjumlahkan seluruh nilai, menggunakan long long untuk antisipasi skala
    double average; // Variabel untuk menyimpan nilai rata-rata
    int count_above_average = 0; // Variabel untuk menghitung nilai >= rata-rata
    int min_nilai;  // Variabel untuk menyimpan nilai minimum
    int max_nilai;  // Variabel untuk menyimpan nilai maksimum
    int range;      // Variabel untuk menyimpan rentang nilai (max - min)

    // Membaca bilangan bulat n dari input
    scanf("%d", &n);

    // Validasi sederhana untuk n agar tidak melebihi ukuran array statis
    // atau n tidak valid (misal <= 0)
    if (n <= 0 || n > 100) {
        // Untuk tugas kuliah, bisa diabaikan atau ditangani dengan pesan error
        // fprintf(stderr, "Error: Jumlah nilai (n) harus antara 1 dan 100.\n");
        return 1; // Mengakhiri program dengan kode error jika n tidak valid
    }

    // Melakukan perulangan sebanyak n kali untuk membaca nilai tugas dan menyimpannya ke array
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]); // Membaca setiap nilai tugas dan menyimpannya
        sum += nilai[i];       // Menambahkan nilai ke total
    }

    // Inisialisasi min_nilai dan max_nilai dengan nilai pertama dari array
    // Ini aman karena kita sudah validasi n > 0
    min_nilai = nilai[0];
    max_nilai = nilai[0];

    // Melakukan perulangan untuk menemukan nilai minimum dan maksimum
    // Dimulai dari indeks 1 karena indeks 0 sudah digunakan untuk inisialisasi
    for (int i = 1; i < n; i++) {
        if (nilai[i] < min_nilai) {
            min_nilai = nilai[i];
        }
        if (nilai[i] > max_nilai) {
            max_nilai = nilai[i];
        }
    }

    // Menghitung nilai rata-rata
    average = (double)sum / n;

    // Melakukan perulangan kedua untuk menghitung berapa banyak nilai yang di atas atau sama dengan rata-rata
    for (int i = 0; i < n; i++) {
        if (nilai[i] >= average) {
            count_above_average++; // Menambah counter jika nilai memenuhi kriteria
        }
    }

    // Menghitung rentang nilai
    range = max_nilai - min_nilai;

    // Menampilkan jumlah seluruh nilai
    printf("%lld\n", sum);

    // Menampilkan nilai rata-rata dengan 2 digit presisi di belakang koma
    printf("%.2f\n", average);

    // Menampilkan banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    printf("%d\n", count_above_average);

    // Menampilkan rentang nilai (maksimum - minimum)
    printf("%d\n", range);

    return 0; // Menandakan program berakhir dengan sukses
}
