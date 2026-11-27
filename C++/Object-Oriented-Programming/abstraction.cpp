#include<iostream>
using std:: string;

// abstraction using abstract classes

// abstract class  // parent class
class Vehicle{
	protected:
	     virtual void start() = 0;
};

// derived class  child

class Car : public Vehicle{
	public:
	   void start() override{
		std:: cout << "Car Strart with a key \n";

	   }
};

// another derived class another child
class Bike : public Vehicle{
	public:
	void start() override{
		std::cout<<"bike starts with a button \n";

	}
};

int main(){
	Car c;
	Bike b;

	c.start();
	b.start();
    return 0;
}