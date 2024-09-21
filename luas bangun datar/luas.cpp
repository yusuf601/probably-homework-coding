#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;
// sumber rumus: https://sdn006batamkota.sch.id/read/480/rumus-menghitung-luas-bangun-datar
float persegi(float *a){
    return *a * *a;
    
}


float segitiga(float *alas, float *tinggi){
    return (*alas * *tinggi);
}

float lingkaran(float *radius){
    return  M_PI * *radius;

}

float trapesium(float *heat,float *alasA, float *alasB){
    return ((*alasA + *alasB) / 2) * *heat;
}

int layang2(int *d1,int *d2){
    return ((*d1 * *d2) / 2);
}

float JaGer(float alas,float tinggi){
    return alas * tinggi;
}

float BelKet(float d1, float d2){
    return (d1 * d2) / 2;
}

int PerPanj(int panjang,int lebar){
    return panjang * lebar;
}

int main(){
    float a,panjang,lebar,al,tng,radian,dia,b,c;
    int dA,dB;
    bool pilihan = true;
    int choice {0};
    float hasil;
    int hasil1;
    int pan,leb;
    while(pilihan){
        cout << "Luas Bangun yang tersedia! \n";
        cout << "1.Persegi \n";
        cout << "2.Segitiga \n";
        cout << "3.Lingkaran \n";
        cout << "4.Trapesium \n";
        cout << "5.layang-layang \n";
        cout << "6.Jajar Genjang \n";
        cout << "7.Belah ketupat \n";
        cout << "8.Persegi panjang \n";
        cout << "Silahkan bangun datar yang anda inginkan: ";
        cin >> choice;
        while(choice <1 || choice > 7){  // || adalah operator or yg mana bernilai true jika kedua true
            cout << "Anda memasukkan angka yang salah,Ulangi lagi!!!" << endl;
            cin >> choice;
        }
        if(choice == 1){
            cout << "Rumus Luas Persegi adalah ";
            cout << "L = s x s" << endl;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            int result = persegi(&panjang);
            cout << "Luas Persegi adalah = " << result << endl;
        }else if(choice == 2){
            cout << "Masukkan Alas:";
            cin >> al;
            cout << "Masukkan tinggi: ";
            cin >> tng;
            int result1 = segitiga(&al,&tng);
            cout << "Luas Segitiga: " << result1 << endl;
        }else if(choice ==3){
            cout << "Masukkan radius: ";
            cin >> radian;
            hasil = lingkaran(&radian);
            cout << "Luas lingkaran: " << hasil << endl;
            
        }else if(choice == 4){
            cout << "Masukkan alas A: ";
            cin >> c;
            cout << "Masukkan alas B: ";
            cin >> b;
            cout << "Masukkan tinggi: ";
            cin >> tng;
            int hasil = trapesium(&c,&b,&tng);
            cout << "Luas trapesium adalah: " << hasil << endl;
        }else if(choice == 5){
            cout << "Masukkan D1: ";
            cin >> dA;
            cout << "Masukkan D2: ";
            cin >> dB;
            hasil1 = layang2(&dA,&dB);
            cout << "Luas layang layang adalah: " << hasil << endl;
        }else if(choice == 6){
            cout << "Masukkan Alas: ";
            cin >> al;
            cout << "Masukkan tinggi: ";
            cin >> tng;
            hasil = JaGer(al,tng);
            cout << "Luas jajar genjang adalah = " << hasil << endl;
        }else if(choice == 7){
            cout << "Masukkan d1: ";
            cin >> dA;
            cout << "Masukkan d2: ";
            cin >> dB;
            hasil = BelKet(dA,dB);
            cout << "Luas Belah ketupat: " << hasil << endl;
        }else if(choice == 8){
            cout << "Masukkan panjang: ";
            cin >> pan;
            cout << "Masukkan lebar: ";
            cin >> leb;
            hasil1 = PerPanj(pan,leb);
            cout << "Luas persegi panjang: " << hasil << endl;
        }else{
            cout << "Invalid input!!!!!! " << endl;
        }
    }

    // cout << "Masukkan nilai a: ";
    // cin >> a;

    // int result = persegi(&a);
    // cout << "Luas Persegi: " << result << endl;
    

    cin.get();
    return 0;
}