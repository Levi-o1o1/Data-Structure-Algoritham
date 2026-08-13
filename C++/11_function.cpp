// fucntion are use to do something many times 

# include <iostream>
using nmaespace std;

double sum(double a, double b){
    double s = a + b;
    return s;
}
// min of 2 num
int minOfTwo(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}
int main(){
    cout << "main = " << minOfTwo
    return 0;
}