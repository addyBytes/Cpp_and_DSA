#include <iostream>
#include<string>
using namespace std;

class Employee{
	public:
		string name;
		int salary;
};

int main(){
	 Employee adi;
	 adi.name = "Aditya";
	 adi.salary = 100000;
	 
  cout<<"The name is "<<adi.name<<endl;
  cout<<"The salar is "<<adi.salary<<endl;
	
	
	return 0;
}
