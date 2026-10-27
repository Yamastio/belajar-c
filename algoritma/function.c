#include "stdio.h"

int tambah(int a, int b) {
  return a + b; // 10 + 10 = 20
}

void tampilkan_pesan(){
  printf("Hello World\n");
}

int main() {
  int hasil = tambah(20, 10);

  printf("Hasil: %d\n", hasil);

  int hasil2 = tambah(-1, 5);
  printf("Hasil2: %d\n", hasil2);

  tampilkan_pesan();
  tampilkan_pesan();
  tampilkan_pesan();

  return 0;
}
