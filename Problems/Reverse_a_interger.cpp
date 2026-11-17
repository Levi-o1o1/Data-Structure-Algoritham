#include<iostream>

using namespace std;

int reverse(int n){

    int num = 0;


    while(n > 0){

      num = num * 10 + n % 10;

      n = n / 10;

    }

    return num ;

}


int main(){

    int n = 34553;

   cout <<reverse(n);
    return 0;
}