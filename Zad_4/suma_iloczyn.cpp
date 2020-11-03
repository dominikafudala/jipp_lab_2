#include <iostream>

using namespace std;

int licz(int *liczba1, int *liczba2, int *iloczyn){
        *iloczyn = (*liczba1) * (*liczba2);
        return *liczba1 + *liczba2;
}

int main(){
    int a, b, iloczyn = 0;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    int suma = licz(&a, &b, &iloczyn);
    cout<<"Suma: "<<suma<<" Iloczyn: "<<iloczyn<<endl;
    return 0;
}