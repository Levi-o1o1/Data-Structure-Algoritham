// fucntion are use to do something many times 

# include <iostream>
using namespace std;

double sum(double a, double b){
    double s = a + b;
    return s;
}
// min of 2 num
int minOfTwo(int a, int b){    // int a or b called our parameters
    if(a < b){
        return a;
    } else {
        return b;
    }
}
int main(){
    cout << "min = " << minOfTwo(5 , 3) << endl;   // this vlaues called arguments
    return 0;
}



// calculate factorial of n

int factN(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact; 
}
int main(){
    cout << factN(5) << endl;
    cout << factN(4) << endl;
    return 0;
}


// 
int factN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout << factN(8) << endl;
    cout << factN(9) << endl;
}