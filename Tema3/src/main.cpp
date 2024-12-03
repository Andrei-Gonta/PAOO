#include<iostream>
using namespace std;


class Student
{
private:
  string name;
  int* id;

public:
  Student(string name, int id):
    name(name) 
  {
    this-> id = new int(id);
    cout<<"New student created. ID: "<<id<<endl;
  }


  Student( const Student& other) : name(other.name), id(nullptr)
  {
    if(other.id)
      {
	id = new int(*other.id);
	cout<<"CC called!"<<endl;
      }
  }

  Student& operator=(const Student& aux)
  {
    if(this == &aux)
      {
	return *this;
      }

    delete id;
    
    name = aux.name;
    id = new int(*aux.id);
    
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

    student_1=student_1;

    Student x =student_2;
    x.display();
    cout<<"DONE!"<<endl;
}
