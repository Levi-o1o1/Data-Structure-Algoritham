// inheritance means inherit properties of child node
#include<iostream>
// parent class
class Animal{
    public:
    void eat(){
        std:: cout<< "animal is eating \n";
    }
};
// child class 
class Dog : public Animal{
    public:
    void bark(){
        std:: cout << "Dog is barking \n";
    }
};
// multilevel inheritance 

class Person{
    public:
    void showName(){
        std::cout<< "name: ayush \n";
    }
};

class Students :public Person{
    public:
    void showRoll(){
        std::cout<<"Roll no:101\n";
    }
};
class Result: public Students{
    public:
    void showMarks(){
        std::cout<< "marks: 90\n";
    }
};
int main(){
    Dog d;
    d.eat();  // inherited function
    d.eat(); // own function
    Result r; // multilevel inheritance
    r.showName();
    r.showRoll();
    r.showMarks();
    return 0;
}