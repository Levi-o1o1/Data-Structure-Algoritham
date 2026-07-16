// loop inside a loop called nasted loop 

int main(){
    for(int i=1; i<=5; i++){
        cout <<"*****"<< "\n";
    }
}


// 
int main(){
    int n = 10;                  
    for(int i=1; i<=n; i++){      // its use for how many line we want to print 
        int m = 10;
        for(int j=1; j<=m; j++){    // its loop use to what contain we want to print in every line like we use * for now
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}