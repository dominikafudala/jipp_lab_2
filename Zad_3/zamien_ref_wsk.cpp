#include <iostream>

using namespace std;

void zamien(int &a, int *b){
        int temp = a;
        a = *b;
        *b = temp;
}

int main(){
    int a, b;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    zamien(a, &b);
    cout<<"Liczby na koniec programu: liczba1 = "<<a<<" liczba2 = "<<b<<endl;
    return 0;
}