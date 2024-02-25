#include<iostream>
using namespace std;

//create a class
class Student{
	private:  // data members declaring 
		int roll_no;
		char name[20];
		char dpt[10];
		int cnic;
		char email[50];
		public:
			void InputMethod(){  // member function define
				cout<<"Enter Your  Roll No....";
				cin>>roll_no;
					cout<<"Enter Your Name....";
					cin>>name;
					cout<<"Enter Your DPT....";
					cin>>name;
					cout<<"Enter Your CNIC....";
					cin>>cnic;
					cout<<"Enter Your Email....";
					cin>>email;
			}
					void OutputMethod(){
				cout<<"Your  Roll No is:"<<roll_no<<endl;
				
					cout<<" Your Name is:"<<name<<endl;
						cout<<"Your DPT is:"<<dpt<<endl;
				
					cout<<" Your CNIC is:"<<cnic<<endl;
						cout<<"Your  Email is:"<<email<<endl;
				
				
				
			}
};
main(){

	Student Data; //object
		cout<<"***********************InPut Method************************************"<<endl;
	Data.InputMethod();
		cout<<"***********************OutPut Method************************************"<<endl;
	Data.OutputMethod();
}

