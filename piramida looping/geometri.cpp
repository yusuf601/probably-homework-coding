#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int choice;
    cin >> choice;
    for(i; i < choice; i++){
        cout << "*" << " ";
        for(int j = 0; j < choice; j++){
            cout << " * " << " " << endl;
        }
    }
}