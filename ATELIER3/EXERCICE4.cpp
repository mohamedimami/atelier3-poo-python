#include <iostream>
using namespace std;

class mere{
	
	public:
		string mere;
		void display(){
			cout<<" Test1 "<<endl;
			
		};
};

class fille:public mere{
	public:
		string fille;
	void display(){
			cout<<" Test2  "<<endl;
		}
  };
  int main(){
    mere m;
    m.display();
    fille f;
    f.display();
};
