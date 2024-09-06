|      NRP       |             Nama              |
| :------------: | :---------------------------: |
| **5025231095** | **Sayyid Daffa ' Al Mubarok** |

# Laporan Tugas 1

## 1. BRVT - Math Team Collection 2013

Pada soal ini kita diberikan tantangan untuk menentukan $m$ dan $n$ pada deret yang berbasis pada $2^m + 2^n$ dimana $0 \le m < n$ dengan diberikan urutan ke $N$. Untuk menyelesaikannya, saya telah mencoba dapatkan hasil deret sebagai berikut:

$$
(0,1),(0,2),(1,2),(0,3),(1,3),...,(m,n)
$$

dapat dilihat bahwa bilangan disebelah kanan berulang sebanyak bilangan itu sendiri, dan bilangan sebelah kiri akan diulang sebanyak bilangan sebelah kanan dikurang 1 $(N-1)$. Untuk itu saya menggunakan _source code_ di bawah ini:

```c++
#include <iostream>
using namespace std;

void kombinasi(int m)
{
    int k = 1, count = 0;

    while ((count + k) < m)
    {
        count += k;
        k++;
    }

    int kiri = m - (count + 1);

    cout << kiri << " " << k;
    cout << "\n";
}

int main(int argc, char **argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    int num;
    while (T--)
    {
        cin >> num;

        kombinasi(num);
    }
}
```

Pembahasan:

```c++
void kombinasi(int m)
{
    int k = 1, count = 0;

    while ((count + k) < m)
    {
        count += k;
        k++;
    }

    int kiri = m - (count + 1);

    cout << kiri << " " << k;
    cout << "\n";
}
```

Disini saya mencek saat elemen ke-$m$ bilangan yang ada pada kanan dan kiri pada kombinasinya, dengan iterasi satu-persatu bilangan yang ada dengan acuan deret yang telah disebutkan di atas.

Hasil pada SPOJ:

![Hasil SPOJ](./assets/ac-1.jpeg)
