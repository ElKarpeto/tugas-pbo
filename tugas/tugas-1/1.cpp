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