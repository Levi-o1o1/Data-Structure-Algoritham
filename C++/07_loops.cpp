// these are 3 type of loops while, for , or do while loop mostly we use for loop 
// Loops while loop 

int main(){
    int a = 1;

    while(a <= 15){
        cout << a << "\n";
        a++;
    }
    cout << endl;
    return 0;
}

//breakdown loop work

int main(){
    int count = 1; // count value is 1 here is starting value

    while(count <= 3){        // we want end the loop when value is less than 3 or 3 
        cout << count << "\n";  // this line print the count 
        count++;         // add count with 1 every time when we run the loop so its add 1 + 1 = 2 than 2 + 1 = 3 
    }
    cout << endl; // end the loop 
    return 0;
}

// control with n 

int main(){
    int n = 20;
    int a = 1;

    while(a <= n){
        cout << a << "\n";
        a++;
    }
    cout << endl;
    return 0;
}

// pro level of loop name 

int main (){
    int n = 20;  //  loop end
    int i = 1; // loop start

    while(i <= n){
        cout << i << "\n";   // \n this n are use to print every number in next line
        i++;
    }
    cout << endl; // its optional for end line 
    return 0;
}