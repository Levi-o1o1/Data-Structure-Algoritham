//  Conditional Statement 
int main(){
    int n = 45;
    if (n <= 0){
        cout << "n is postive ";
    } else {
        cout << "n is negtive ";
    }
    return 0;
}

// age limiter 

int main(){
    int age;
    cout<< "Enter the age ::" << "\n" ;
    cin >> age ;
    
    if (age > 18 ){
        cout<< "You are adult :: "<< "\n";
    } else{
        cout << "You are teenager :: " << endl;
    }

    return 0;
}