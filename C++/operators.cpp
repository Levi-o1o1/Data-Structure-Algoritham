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
// with type casting 
int main (){
    cout << (5 / (double)2) << endl;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 2) Relational Operators
// (=) single equal are use to asgin value 
// (==) is orignal equal to in c++ to to use in equal 
// (<) less than (>) greater than 
// (<=) less than equal to (>=) greather than equal to 
// (!=) not equal 
int main (){
    cout << (3 < 5 ) << endl;  // output is True = 1
    cout << (3 > 5) << endl;   // output is False = 0
    cout << (3 <= 5) << endl;  // output is True = 1
    cout << (3 >= 5) << endl;  // output is False = 0
    cout << (3 != 3) << endl;  // output is False = 0
    cout << (3 != 5) << endl; // output is True = 1
    return 0;
}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// 3 ) Logical opeerators 
//  they are 3 types OR || , AND &&  , NOT !

int main(){
    cout << (3 > 1) << endl; // output is Ture = 1 but if we want False 0 we use not(!) operator
    cout << !(3 > 1) << endl; // output is False = 0 
}
// logical not reverse the original ans 

// logical OR (||) are use to in two condition's in one is true so they give true eg ::

int main (){
    cout << ((3>1) || (3 < 5) )<< endl; // if one are false or one are ture give 1
    cout << ((3<1) || (3<1)) << endl; // if both are false = false 0 
    return 0;
}