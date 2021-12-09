#include <iostream>
#include <string>
using namespace std;
class Personne{ // classe mère 
private:
string nom ;
string prenom;
int datedenaissance;
public:
Personne(string n,string p,int d  ):nom{n},prenom{p},datedenaissance{d}{

}
 virtual void afficher()
 {
     cout<<"Nom: "<<nom<<endl<<"Prenom: "<<prenom<<endl<<"date de naissance: "<<datedenaissance<<endl;
 }
};
class Employe : Personne // classe fille : employe
{
    private:
    double salaire;
    public:
    Employe(string n,string p,int d,double s):Personne(n,p,d){ 
        salaire = s;
    }
  void afficher(){
        Personne::afficher();
         cout<<"salaire : "<< salaire <<endl;
    }
};
class Chef : Employe{ // classe fille : chef 
    private :
    string service ;
    public:
    Chef(string n,string p ,int d ,double s ,string ser):Employe(n,p,d,s){
       service=ser;


    }
  void  afficher(){ // fonction d'affichage 
Employe::afficher();
cout<<"service  : "<< service <<endl;
    }
};
class Directeur : Chef{ // classe fille : directeur de la classe mère : chef 
private:
     string societe;
     public:
     Directeur(string n,string p ,int d ,double s ,string ser,string soc):Chef(n,p,d,s,ser){
         societe=soc;
     }
   void  afficher(){
         Chef::afficher();
         cout<<"societe : "<< societe <<endl;
     }
};
int main(){
    Directeur dir("Mohamed","Imami",2001,97000,"oui","oui");
    dir.afficher();
    return 0;
}
