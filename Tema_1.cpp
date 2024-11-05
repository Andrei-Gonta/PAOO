#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int engine_capacity;
        int engine_power;
        
    
    
    public: 
        Car(string& brand, int engine_capacity, int engine_power) 
        : brand(brand), engine_capacity(engine_capacity), engine_power(engine_power)
        {
            cout<<"Car: "<<brand<<" "<<model<<"created successfully!"<<endl;
        }
       
        
        void apply_soft_power(int hp)
        {
            engine_power=engine_power+hp;
            cout<<"Now your car has :"<<engine_power<<"hp!"<<endl;
        }
        
        
};





int main()
{
   cout<<"Hello World";

    return 0;
}