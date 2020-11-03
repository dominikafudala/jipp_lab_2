#include <iostream>

using namespace std;

void zamien(int &liczba1, int &liczba2){
        
        int temp = liczba1;
        liczba1 = liczba2;
        liczba2 = temp;
}

int main(){
    int a, b;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    zamien(a, b);
    cout<<"Liczby na koniec programu: liczba1 = "<<a<<" liczba2 = "<<b<<endl;
    return 0;
}