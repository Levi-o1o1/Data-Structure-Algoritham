

int main(){
    int n = 3;

    for(i = 0; i<n; i++){
        for (j=0; j<n; j++){
            cout << n;
            n++;
        }
        cout << endl;
    }

}

// acdefg pattern 
// a
// a b
// a b c
// a b c d
// a b c d e 

// right trangle  abc pattern
// ascii vlue of a is 97 k is 107 and A is 65 
int main(){
    
    for(char i = 97; i<= 107; ++i){
        for(char j = 97; j<=i; ++j){
            cout<< i << " ";
        }
        cout << endl;
    }

}

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\
// *  
// *  *  
// *  *  *  
// *  *  *  *  
// *  *  *  *  *  
// *  *  *  *  *  * 

int main(){
    int n = 5;
  for(int i = 0; i<= n; i++){
      for(int j = 0; j<= i; j++){
          cout << "* " << " ";
      }
      cout << endl;
  }
  
}


//  square pattern if i want to print 123 "\n" 345 "\n" 678 "\n" so i need 
//  outer loop n times run n = 3;
// inner loop 

int main(){
    int n = 3;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num  << " " ;
            num++;
        }
        cout << endl;
    }
}