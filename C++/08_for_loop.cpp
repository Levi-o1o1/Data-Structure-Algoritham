//  for loop formula 
// for(initialisation; condition; updattion){
//      work 
// }

int main(){
    int n = 5;
    for(int i= 1; i<= n ; i++)
    cout << i << " ";
    
    return 0;
}
// add incress 2 num
int main(){
    int n = 5;
    for (int i =1; i<=n; i = i+2)
    cout << i << " ";

}

// final value sum program 

int main(){
    int n = 3;
    int sum = 0;
    for (int i =1; i<=n; i++){
        sum += i;
    }
    cout << " sum = "<< sum << endl;
    return 0;
}