#include <iostream>
#include <string>
using namespace std;

class person
{
	protected:
		char name[25];
		char gender[25];
		long mobile_no;
	public:
		void get();
		void put();
};

void person::get()
{
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter Gender: ";
	cin>>gender;
	cout<<"Enter Mobile No: ";
	std::string mob;
	cin>>mob;
	std::string::size_type sz;
	mobile_no = std::stol(mob,&sz);
}
void person::put()
{
	cout<<"Name:\t"<<name<<endl;;
	cout<<"Gender:\t"<<gender<<endl;;
	cout<<"Enter Mobile No: "<<mobile_no<<endl;
}
class Employee:public person{
	protected:
		long Emp_Id;
		string Designation;
		long dob;
		long hra;
		string department;
		string gradeofemployee;
	public:
		void get();
		void put();
};
void Employee::get(){
	person::get();
	cout<<"Enter Emp_Id: ";cin>>Emp_Id;
	cout<<"Enter Designation: ";cin>>Designation;
	cout<<"Enter DOB: ";cin>>dob;
	cout<<"Enter House Rent Allowance: ";cin>>hra;
	cout<<"Enter Department: ";cin>>department;
	cout<<"Enter Grade of Emp: ";cin>>gradeofemployee;
}
void Employee::put(){
	person::put();
	cout<<"Emp_Id: "<<Emp_Id<<endl;
	cout<<"Designation: ";cout<<Designation;
	cout<<"DOB: ";cout<<dob;
	cout<<"House Rent Allowance: ";cout<<hra;
	cout<<"Department: ";cout<<department;
	cout<<"Grade of Emp: ";cout<<gradeofemployee;
}

int main()
{
	Employee E;
	E.get();
	E.put(); 
	return 0;
	
}