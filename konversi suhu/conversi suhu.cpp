#include <iostream>
#include <string>
using namespace std;


// sumber rumus : https://www.gurusumedang.com/2022/03/suhu-dan-konversi-suhu.html

void celcius(float a){
    float rea,fah,kel;
    // float suhu;
    int pil2;
    rea = float((4 * a) / 5); 
    fah = (((9 * a )/ 5) + 32);
    kel = a + 273; 


    cout << "1.Reamur \n";
    cout << "2.Kelvin \n";
    cout << "3.Fahrenheit \n";
    cout << "Pilih satuan suhu yang anda akan convert: ";
    cin >> pil2;
    if(pil2 == 1){
        cout << "Celcius ke Reamur = " << rea << endl;
    }else if(pil2 == 2){
        cout << "Celcius ke Kelvin = " << kel << endl;
    }else if(pil2 == 3){
        cout << "Celcius ke Fahrenheit = " << fah << endl;
    }else{
        cout << "Invalid input! " << endl;
    }

}

void fahrenheit(float b){
    float cel,rea,kel;
    int choice1;
    cel = ((5 * b - 32 )/ 9);
    rea = ((4 * b - 32)/ 9);
    kel = ((5 * (b - 32)) / 9) + 273;
    cout << "1.Celcius \n";
    cout << "2.Kelvin \n";
    cout << "3.Reamur \n";
    cout << "Pilih satuan suhu yang anda akan convert: ";
    cin >> choice1;
    if(choice1 == 1){
        cout << "Fahrenheit ke Celcius = " << cel << endl;
    }else if(choice1 = 2){
        cout << "Fahrenheit ke Kelvin = " << kel << endl; 
    }else if(choice1 == 3){
        cout << "Fahrenheit ke Reamur = " << rea << endl;
    }else{
        cout << "Invalid input! " << endl;
    }


}

void reamur(float c){
    float tempC,tempK,tempF;
    int choiceR;
    tempC = (5 * c) / 4;
    tempK = (5 * c) + 273;
    tempF = (9 * c) + 32;
    cout << "1.Celcius \n";
    cout << "2.Kelvin \n";
    cout << "3.Fahrenheit \n";
    cout << "Pilih satuan suhu yang anda akan convert: ";
    cin >> choiceR;
    if(choiceR == 1){
        cout << "Reamur ke celcius = " << tempC << endl;
    }else if(choiceR = 2){
        cout << "Reamur ke Kelvin = " << tempK << endl;
    }else if(choiceR == 3){
        cout << "Reamut ke Fahrenheit = " << tempF << endl;
    }else{
        cout << "Invalid Input " << endl;
    }
}

void kelvin(float d){
    float temprC,temprF,temprR;
    int choiceK;
    temprC = (d - 273);
    temprF = (4 * (d - 273) / 5);
    temprR = (9 * (d - 273) / 5) + 32;
    cout << "1.Celcius \n";
    cout << "2.Reamur \n";
    cout << "3.Fahrenheit \n";
    cout << "Pilih satuan suhu yang anda akan convert: ";
    cin >> choiceK;
    if(choiceK == 1){
        cout << "Kelvin ke celcius = " << temprC << endl;
    }else if(choiceK == 2){
        cout << "Kelvin ke Fahrenheit = " << temprF << endl;
    }else if(choiceK == 3){
        cout << "Kelvin ke Reamur = " << temprR << endl;
    }
}

int main(){
    // int reamus,fahrenheit,kelvil,cel;
    int pilihan {0};
    int suhu,suhu1,suhu2,suhu3;
    while(true){
        cout << "Satuan yang tersedia \n";
        cout << "1.celcius \n";
        cout << "2.Fahrenheit \n";
        cout << "3.Reamur \n";
        cout << "4.Kelvin \n";
        cout << "Pilih satuan suhu: ";
        cin >> pilihan;
        if(pilihan == 1){
            cout << "Masukkan suhu dalam celcius: ";
            cin >> suhu1;
            celcius(suhu1);
        }else if(pilihan == 2){
            cout << "Masukkan suhu dalam Fahrenheit: ";
            cin >> suhu;
            fahrenheit(suhu);
        }else if(pilihan == 3){
            cout << "Masukkan suhu dalam Reamur: ";
            cin >> suhu2;
            reamur(suhu2);
        }else if(pilihan == 4){
            cout << "masukkan suhu dalam Kelvin: ";
            cin >> suhu3;
            kelvin(suhu3);
        }else{
            cout << "Invalid input Try again!!!!" << endl;
        }
    }
    // cout << "Satuan yang tersedia \n";
    // cout << "1.celcius \n";
    // cout << "2.Fahrenheit \n";
    // cout << "3.Kelvin \n";
    // cout << "4.Reamur \n";
    // cout << "Pilih satuan suhu: ";
    // cin >> pilihan;
    // cout << "Masukkan suhu (dalam angka): ";
    // cin >> pil;
    // if(pilihan == 1){
    //     celcius(pil);
    // }else if(pilihan == 2){
        
    // }
    cin.get();
    return 0;
}