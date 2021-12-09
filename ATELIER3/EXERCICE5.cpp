#include<iostream>
using namespace std;
class animal{
    private: 
    string Nom;
    protected:
    int Age;
    
    public:
    animal(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom;
    }
    void set_value();

};

class zebra{
    protected:
          int Age;
    private:
          string Nom;
    public:
    zebra(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom;
    }

   

 void show_zebra(){
        cout<<"Age = "<<Age<<" ,  Nom = "<<Nom<<endl;
    }
};

class dolphin{
    protected:
          int Age;
    private:
          string Nom;
    public:
    dolphin(int Age , string Nom){
        this->Age=Age;
        this->Nom=Nom; 
    }
    void show_dolphin(){
        cout<<"Age = "<<Age<<" ,  Nom = "<<Nom<<endl;
    }
};

int main(){
     zebra z(10,"zebra");
     dolphin d(12,"dolphin");
     z.show_zebra();
     d.show_dolphin();

    return 0;
}


