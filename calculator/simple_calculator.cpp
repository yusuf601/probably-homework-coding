#include <iostream>
#include <string>
using namespace std;

int tambah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a, int b){
    return a / b;
}
int main(){
    bool pilihan = true;
    int choice {0};
    int angka1,angka2;
    int add,minus,multiply,divided;


    while(pilihan){
        cout << "Masukkan angka pertama: ";
        cin >> angka1;
        cout << "Masukkan angka kedua: ";
        cin >> angka2;
        // add = tambah(angka1,angka2);
        // minus = kurang(angka1,angka2);
        // multiply = kali(angka1,angka2);
        // divided = bagi(angka1,angka2); 
        cout << "Daftar operasi yg tersedia \n"; 
        cout << "1.tambah( + ) \n";
        cout << "2.kurang( - ) \n";
        cout << "3.kali( x ) \n";
        cout << "4.bagi ( / ) \n";
        cout << "Masukkan operasi yang anda inginkan: ";
        cin >> choice;
        if(choice == 1){
            add = tambah(angka1,angka2);
            cout << "Hasil Penjumlahan: " << angka1 << " + " << angka2 << " = " << add << endl;
        }else if(choice == 2){
            minus = kurang(angka1,angka2);
            cout << "Hasil pengurangan: " << angka1 << " - " << angka2 << " = " << minus << endl;
        }else if(choice == 3){
            multiply = kali(angka1,angka2);
            cout << "Hasil perkalian: " << angka1 << " x " << angka2 << " = " << multiply << endl;
        }else if(choice == 4){
            divided = bagi(angka1,angka2); 
            cout << "Hasil pembagian: " << angka1 << " / " << angka2 << " = " << divided << endl;
        }else{
            cout << "Invalid input" << endl;
        }

    }

    cin.get();
    return 0;
}