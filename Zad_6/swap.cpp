#include <iostream>
#include <vector>

using namespace std;

template<typename T>

void zamien(T &dana1, T &dana2){
        
        T t(move(dana1));
        dana1 = move(dana2);
        dana2 = move(t);
}

int main(){
    vector<int>num1;
    vector<int>num2;
    for(int i = 0; i < 10; i++)
    {
        num1.push_back(i);
        num2.push_back(i+10);
    }
    cout<<"Wektor 1"<<endl;
     for(int i = 0; i < num1.size(); i++) {
        cout<<num1[i]<<" ";
    }
    cout<<endl;
    cout<<"Wektor 2"<<endl;
     for(int i = 0; i < num2.size(); i++) {
        cout<<num2[i]<<" ";
    }
    cout<<endl;
    zamien(num1, num2);
    cout<<"Wektory po zamianie"<<endl;
    cout<<"Wektor 1"<<endl;
     for(int i = 0; i < num1.size(); i++) {
        cout<<num1[i]<<" ";
    }
    cout<<endl;
    cout<<"Wektor 2"<<endl;
     for(int i = 0; i < num2.size(); i++) {
        cout<<num2[i]<<" ";
    }
    cout<<endl;

    return 0;
}