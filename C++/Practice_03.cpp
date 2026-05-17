// sum of odd numbers 

int main(){
    int n = 5;
    int oddSum = 0;
    for(int i = 1; i<=n; i++){
        if(i%2 != 0){
            oddSum += i;
        }
    }
    cout << "odd sum is = " << oddSum << endl;
    return 0;
}

// sum of even numbers 

int main(){
    int n = 15;
    int evenSum = 0;
    for(int i = 1; i<=n; i++){
        if(i%2 == 0){
            evenSum += i;    // output is 56 
        }
    }
    cout << "even sum is ="<< evenSum << endl;
    return 0;
}