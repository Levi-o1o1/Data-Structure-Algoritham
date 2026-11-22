#include<iostream>
#include<string>
using namespace std;

 class Employee{
	 
	public:
	string name; 
	string company;
	
	int age;
	
	void Intro(){
	    cout<< "Name : "<< name << endl;
	    cout << "company : " << company << endl;
	    cout << "age : "<< age << endl;
	} 
 };
 
int main(){
  Employee emo1;
  emo1.name = "raj";
  emo1.company = "cognizent";
  emo1.age = 23;
  emo1.Intro();	
	
	
}
