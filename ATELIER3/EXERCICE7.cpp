#include<iostream>
#include<math.h>
using namespace std;
class Vecteur3d{
	private:
		float x,y,z;
	public:
		Vecteur3d(float x=0,float y=0,float z=0)
		{
			this->x=x;
			this->y=y;
			this->z=z;
		}
		void Afficher()
		{
			cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		Vecteur3d Somme(Vecteur3d A)
		{
			Vecteur3d B;
			B.x=x+A.x;
			B.y=y+A.y;
			B.z=z+A.z;
			return A;
		}
		float Produit(Vecteur3d C)
		{
			float p;
			p=x*C.x+y*C.y+z*C.z;
			return p;
		}
		bool Coincide(Vecteur3d Z)
		{
			if(x==Z.x && y==Z.y && z==Z.z);
			  return true;
			return false;
		}
		float Norme(Vecteur3d N)
		{
			float n;
			n= sqrt(x*x+y*y+z*z);
			return n;
		}
		
};
int main()
{
	float d;
	Vecteur3d M(3,4,-5) , N(10,-5,6) , O;
	M.Afficher();
	O=N.Somme(M);
	O.Afficher();
	d=M.Produit(N);
	cout<<"le produit est"<<d<<endl;
	 
	if(M.Coincide(N)==true){
		cout<<"M et N se coincide"<<endl;
	}
	
	else{
		cout<<"M et N ne se coinside pas"<<endl;
	}
	
	
}