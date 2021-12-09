#include <iostream>

using namespace std;
//Déclaration de la classe shape
class Shape
{

public: 
	int r1,r2,t1,t2,n;


  Shape()
  {
  	//le rôle de cette classe est de donner à l'utilsateur le choix entre le rectangle ou le triangle
    cout<<"Voulez-vous calculer l'aire du triangle ou du rectangle ? "<<endl;
    cout<<"1 pour le rectangle ."<<endl;
    cout<<"2 pour le triangle ."<<endl;
    cin>>n;
  }
  void calculer(){
  	//cette méthode "calculer" calcule l'aire soit du rectangle ou du traingle
  	if (n==1){
  	cout<<"Donnez les dimensions du rectangle :"<<endl;
  	cout<<"Donnez l'hauteur :";
  	cin>>r1;
  	cout<<endl<<"Donnez le largeur :";
  	cin>>r2;
  	cout << "L'aire du rectangle est: " <<r1 * r2 << endl;
  }
  else if(n==2){
  	cout<<"Donnez les dimensions du triangle :"<<endl;
  	cout<<"Donnez l'hauteur :";
  	cin>>t1;
  	cout<<endl<<"Donnez le largeur :";
  	cin>>t2;
  	cout << "L'aire du triangle est: " <<(t1 * t2)/2<< endl;
  }
  }
};


int main (){

  Shape a;
  a.calculer();

  return 0;
}
