#include<iostream>
using std:: string;

class AbsEmo{
	virtual void AskForPromotion() =0;
	
	
};
class Employee:AbsEmo{
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
	 void intro(){
		 Employee(string name, string company, int age){
			 
		 }
	 }
		 return age;
	 }
	 void AskForPromotion(){
		 if(age>30){
			 std::cout<< "MR." << Name<< ": is aplicable for promotion "<< std::endl;
		 }else{
			 std::cout<< "MR." << Name<< ": Sorry but YOU are too Young for that "<< std::endl;
		 }
	 }
 };
 
int main(){
 Employee employee1 = Employee("Raj Deshmukh","TCS", 34);
 Employee employee2 = Employee("Mukesh Verma","TCS-Ninja", 28);
 
 employee1.AskForPromotion();
 employee2.AskForPromotion();
}
