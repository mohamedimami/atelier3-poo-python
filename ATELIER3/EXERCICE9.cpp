#include<iostream>
using namespace std;

class Test {
    private:
       static  int n;
    public:
         void call(){
             n++;
             cout<<n<<endl;
         }

};

int Test :: n=0;

int main(){
    Test A1,A2;
      A1.call();
      A2.call();
    
}
