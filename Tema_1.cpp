/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string* brand;
        string* model;
        int* engine_capacity;
        int* engine_power;
        
    
    
    public: 
        Car(const string& brand,const string& model,int engine_capacity, int engine_power) 
        //: brand(brand),  model(model), engine_capacity(engine_capacity), engine_power(engine_power)
        {
            this->brand = new string(brand);
            this->model = new string(model);
            this->engine_capacity = new int(engine_capacity);
            this->engine_power = new int(engine_power);
            
            cout<<"Car: "<<brand<<" "<<model<<" created successfully!"<<endl;
        }
        
        
        Car(const Car& another_car)
       
        {
            this->brand =new string(*another_car.brand);
            this->model = new string(*another_car.model);    
            this->engine_capacity = new int(*another_car.engine_capacity);
            this->engine_power = new int(*another_car.engine_power); 
            
        }
       
        
        void apply_soft_power(int hp)
        {
            *engine_power+=hp;
            cout<<"Now your car has :"<<*engine_power<<"hp!"<<endl;
        }
        
        ~Car()
        {
            delete brand;
            delete model;
            delete engine_capacity;
            delete engine_power;
        }
   
};





int main()
{
    Car car("VW", "Golf", 1600, 110);
    car.apply_soft_power(30);
    
    Car another_car = car;
    

    return 0;
}