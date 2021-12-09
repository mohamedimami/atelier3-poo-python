#include <iostream>
using namespace std;
// On a declaré la classe "complexe" pour faire les opérations arithmétiques sur les nombres complexes :
class complexe{
	
	public:
		int re1;
		int re2;
		int im1;
		int im2;
		
		int op;
		// cette méthode permet de demander à l'utilisateur d'entrer les paramètres des nombres complexes :
		 complexe(){
		 	cout<<"Pour le premier complexe : "<<endl;
			cout<<"Entrez la partie reele : "<<endl;		
			cin>>re1; 
		    cout<<"Entrez la partie imaginaire : "<<endl;		
			cin>>im1; 	
			
			cout<<"Pour le deuxieme complexe : "<<endl;
			cout<<"Entrez la partie reele : "<<endl;		
			cin>>re2;
			cout<<"Entrez la partie imaginaire : "<<endl;		
			cin>>im2;  
		//ici on a demandé à l'utilisateur de choisir une des opérations suivants :
			cout<<"Choisissez une opération : "<<endl;
            cout<<"1.Somme"<<endl;
            cout<<"2.Soustraction"<<endl;
            cout<<"3.Multiplication"<<endl;
            cout<<"4.Division"<<endl;
            cin>>op;
			
			};
			
	void calcul(){
		if(op==1){
			cout<<"la somme de deux complexes est : " <<re1+re2<< " +"<<im1+im2<<"i"<<endl;
        }
	
	    else if (op==2){
	  	    cout<<"la soustraction de deux complexes est : " <<re1-re2<< " +"<<im1-im2<<"i"<<endl;
	  	}
	  	
	  	else if(op==3){
	  		cout<<"la multiplication de deux complexes est : "<<re1*re2+im1*im2<< " +"<<re1*im2+im1*re2<<"i"<<endl;
	    }
	    
		else if(op==4){
		   if(im2==0 && re2==0){
		   	    cout<<"erreur division sur 0";
		   }
		    else{
		        cout<<"la division de deux complexes est : " <<float(im1*im2-re1*re2)/float(im2*im2+re2*re2)<< " +"<<float(im1*re2-re1*im2)/float(re2*re2+im2*im2)<<"i"<<endl;
		  		}
			 
		  }
		    else{
		  	    cout<<"Choisissez une des quatres operations!"<<endl;
		  }
	}
	
	
};
	

int main(){
	complexe a;
	a.calcul();	

	return 0;
};
