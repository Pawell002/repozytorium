#include <iostream>
#include <cmath>

using namespace std;

bool czyPierwsza(int liczba) {
    if (liczba <= 1) return false; 
    if (liczba <= 3) return true;  
    if (liczba % 2 == 0 || liczba % 3 == 0) return false;
    for (int i = 5; i * i <= liczba; i += 6) {
        if (liczba % i == 0 || liczba % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}

