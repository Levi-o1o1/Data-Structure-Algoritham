#include<iostream>
#include<string>
using namespace std;

 class Employee{
	 
	private:
	string name; 
	string company;
	int age;
	
	public:
	Employee(string n, string c,int a ){
		
		this -> name = n;
		this -> company = c;
		this -> age = a;
		
		
	}
	void Intro(){
	    cout<< "Name : "<< name << endl;
	    cout << "company : " << company << endl;
	    cout << "age : "<< age << endl;
	    
	} 
 };
 
int main(){
 Employee emo1 = Employee("raj", "cisco", 34);
  emo1.Intro();
}
