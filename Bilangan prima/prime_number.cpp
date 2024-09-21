#include <iostream>
#include <cmath>
using namespace std;

// algoritma: https://www.zendcode.web.id/2022/11/algoritma-flowchart-bilangan-prima.html

// tidak berfungsi untuk bilangan 2 3 4 karena akar nya di bawah 2 dan sma dengan 2
int main(){
    int i,j,prime;
    int bilangan;
    cout << "Masukkan Angka yang akan di periksa: ";
    cin >> bilangan;
    for(i = 2; i < sqrt(bilangan); i++){
        if(bilangan % i == 0){
            cout << "Bukan bilangan prima" << endl;
        }else if(bilangan % i != 0){
            cout << "Bilangan Prima " << endl;
        }else if(bilangan <= 1){
            cout << "bukan bilangan Prima" << endl;
        }else{
            cout << "Invalid input" << endl;
        }

         }
    cin.get();
    return 0;
}