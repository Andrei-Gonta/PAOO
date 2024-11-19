#include <iostream>
#include <string>
using namespace std;

class Exercitiu
{
    private: 
    
        string nume;
        int sets;
        int reps;
        int kg;
        
    public:
    
        Exercitiu(string nume, int sets, int reps, int kg) :
        nume(nume), sets(sets), reps(reps), kg(kg)
        {
            cout<<"Exercitiul "<<nume<<" a fost creat cu succes!"<<endl;
        }
        
    
};

//item 5
class Exercitiu_modificat
{
public:
  
  Exercitiu_modificat() = default;

  //Exercitiu_modificat(const Exercitiu_modificat&) = default;
  ~Exercitiu_modificat() = default;

  //item 6
  
  //copy constructor dezactivat
  Exercitiu_modificat(const Exercitiu_modificat&) = delete;

  //dezactivare operator de atribuire
  Exercitiu_modificat& operator = (const Exercitiu_modificat&) = delete;
  
  

};


int main()
{
     //item 4
    Exercitiu bench_press("Bench press", 4, 8, 80);
    
    //item 5
    Exercitiu_modificat modex1;
    //item6
     Exercitiu_modificat modex2 = modex1; // genereaza eroare
    
    return 0;
}
