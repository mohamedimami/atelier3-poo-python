#include <iostream>
using namespace std;

//D�claration de la classe 
class Myclass{
		public:
	//d�claration des attributs :
	int n;
	//d�claration des m�thodes :
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
