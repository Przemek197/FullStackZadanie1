#include <iostream>
using namespace std;
void punkt1C()
{
    cout << "\nKalkulator elementów ciągu Fibonacciego\n";
    cout << "Przemysław Borczuk\n";
    cout << "I2S 2.1\n";
}

int main()
{
    punkt1C();

    int k = 0;
    while (k >= 0)
    {
        int liczba1 = 0, liczba2 = 1, liczba3 = 0;
        cout << "Podaj liczbe elementu ciagu Fibonacciego do obliczenia lub -1 aby wyjsc: ";
        cin >> k;
        if (k >= 0)
        {
            for (int i = 1; i < k; ++i)
            {
                liczba3 = liczba1 + liczba2;
                liczba1 = liczba2;
                liczba2 = liczba3;
            }
            if(k==1){
                cout << "1 element ciągu wynosi: " << liczba2 << "\n";
                punkt1C();
            }
            else{
                cout << k << " element ciągu wynosi: " << liczba3 << "\n";
                punkt1C();
            }
        }
        else 
            break;
    }
    cout << "Wychodzenie z programu ...";
    punkt1C();
    return 0;
}