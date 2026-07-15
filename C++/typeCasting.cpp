# include <iostream>
using namespace std;

// converting data from one type to another like int -> to string 

//  there are two type of type casting first is [implicit] that converssion compilor do automaticaly eg: >>>>>
// note : implicit use to convert small data types to big data types only 
int main(){
    char grade = 'A';
    int value = grade;
    cout << value <<endl;
    
    return 0;
}

// second is [explicit] casting , use to big to small convert
int main (){
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}

//  note the output is 100 becuase in c++ after decimal value are ingore only 100 show 
// and you want to know about the data types how many memory takes go visit in data_tppes.cpp in this repo