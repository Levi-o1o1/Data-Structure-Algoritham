#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	string Name; 
	string company;
	int age;
	
public:
     void setName(string name){
		 Name = name;
	 }
	 string getName(){
		 return Name;
	 }
	 void setCom(string com){
		 company = com;
	 }
	 string getCom(){
		 return company;
	 }
	 void setAge(int a){
		 age = a;
	 }
	 int getAge(){
		 return age;
	 }
	
 };
 
int main(){
 Employee employee1;
 employee1.setAge(45); 
 employee1.setName("Mukesh"); 
 employee1.setCom("TCS Ninja"); 

 cout<< employee1.getAge() << "\n";
 cout<< employee1.getCom() << "\n";
 cout<< employee1.getName() << "\n";
 
}
