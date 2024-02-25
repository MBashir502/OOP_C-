#include<iostream>
using namespace std;
class Pak{
	private:
		int n = 20;
		public:
			void show(){
				cout<<"The value of N:"<<n<<endl;
			}
		
};
main(){
	Pak P;
	P.show();
}
