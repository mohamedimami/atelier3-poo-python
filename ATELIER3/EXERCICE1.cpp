#include <iostream>
using namespace std;

//Déclaration de la classe 
class Myclass{
		public:
	//déclaration des attributs :
	int n;
	//déclaration des méthodes :
	Myclass();
	Myclass2();

	void afficher(){
		cout<<"entrez un numero : "<<endl;
		cin>> n ;
		cout<<"le numero que vous avez ecrit est : "<<n<<endl;
	};
};

	Myclass::Myclass(){
};
 
    Myclass::Myclass2(){
	};
int main(){
	Myclass etudiant;	
	
	etudiant.afficher();
	return 0;
};
