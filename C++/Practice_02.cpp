#include <iostream>
using namespace std;

int main(){
    int a, b ;
    cout << "Enter the value one ::" << endl;
    cin >> a ;
    cout << "Enter the value two ::" << endl;
    cin >> b ;
    int add = a+b ;
    int sub = a-b ;
    double divide = a/b ;
    int mul = a*b;
    
    cout << "ans is ::" << add << endl;
    cout << "ans is ::" << sub << endl;
    cout << "ans is ::" << divide << endl;
    cout << "ans is ::" << mul << endl;
    return 0;

}