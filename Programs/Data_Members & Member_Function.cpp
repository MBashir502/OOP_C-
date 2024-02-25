#include<iostream>
using namespace std;

class Student{
	private:
	
		public:
			void display(int);
			
			
};
void Student::display(int roll_no){
		cout<<"The Roll No is:"<<roll_no;
}
main(){
	Student R;
	int rno;
	cout<<"Enter the roll no....";
	cin>>rno;
	R.display(rno);
}
