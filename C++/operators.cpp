// operators 1) arithmetic =  +, -, *, / , moduleo op % ,
int main (){
    int a = 10, b = 5;
    cout << "sum = " << (a+b) << endl;           // output is 15
    cout << "dirfference = " << (a-b) << endl;   // output is 5
    cout << "product = " << (a*b) << endl;       // output is 50 
    cout << "division = "<< (a/b) << endl;       // output is 2
    cout << "modulo = " << (a%b) << endl;        // output is 0 
    return 0;
}
// note in division you will see the ans is 2 not 2.5 because in c ++ its ingnore the value after decimal you will see in this eg::
int main (){
    int a = 10, b = 5;
    cout << (a/b) << endl; // output is 2 but if you want in float/int or double/int you will get the orginal ans 
}
int main (){
    int a = 10;
    double b =2;
    cout << (a/b) << endl; // output is 2.5 because double contain extra value rather than int data type , you can use float also 
}
// 2) logical op 