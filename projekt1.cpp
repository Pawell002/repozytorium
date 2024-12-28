#include <iostream>
#include <cmath>

using namespace std;


unsigned long long silnia(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * silnia(n - 1);
}

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
        cout << "1. Silnia" << endl;
	cin >> wyjscie;
	if(wyjscie == 1){
		cout << silnia(a) << endl;
	cout << "2. pierwsza" << endl;
        cin >> wyjscie;
	if(wyjscie == 2){
		cout << czyPierwsza(b) << endl;
	}
    } while(wyjscie != 0);
    return 0;
}

