#include <iostream>

using namespace std;

template <typename T>

void funSwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    cout<<"Test dla roznych typow danych"<<endl;
    cout<<"Dane typu int: ";
    int a = 1;
    int b = 3;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    funSwap(a, b);
    cout<<"Po zamianie: ";
    cout<<"a = "<<a<<" b = "<<b<<endl;

    cout<<"Dane typu float: ";
    float c = 1.4;
    float d = 3.2111;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    funSwap(c, d);
    cout<<"Po zamianie: ";
    cout<<"c = "<<c<<" c = "<<d<<endl;

    cout<<"Dane typu char: ";
    char e = 'b';
    char f = 's';
    cout<<"e = "<<e<<" f = "<<f<<endl;
    funSwap(e, f);
    cout<<"Po zamianie: ";
    cout<<"e = "<<e<<" f = "<<f<<endl;

    cout<<"Dane typu bool: ";
    bool g = true;
    bool h = false;
    cout<<"g = "<<g<<" h = "<<h<<endl;
    funSwap(g, h);
    cout<<"Po zamianie: ";
    cout<<"g = "<<g<<" h = "<<h<<endl;

    return 0;
}