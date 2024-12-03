#include<iostream>
using namespace std;


class Student
{
private:
  string name;
  int id;

public:
  Student(string name, int id):
    name(name), id(id)
  {
    cout<<"New student created. ID: "<<id<<endl;
  }

  Student& operator=(const Student& aux)
  {
    
    name = aux.name;
    id = aux.id;
    return *this;
  }

  void display()
  {
    cout<<"Studentul: "<<name<<" cu id-ul:"<<id<<endl;
  }
};



int main()
{

  Student student_1("Marcel", 001);
  Student student_2("Vlad", 002);

  student_1=student_2;

    student_1.display();
    cout<<"DONE!"<<endl;
}
