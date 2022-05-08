#include <iostream>
#include <string.h>

using namespace std;

class employee {
private:
    int id ;
    char name [20];
    float salary ;

public:
    void setId(int i);
    void SetName(char n[20]);
    void SetSalary(float s);

    int getId();
    char* getName();
    float getSalary();


    employee(){
        id = 0;
        strcpy(name," ");
        salary = 0;
    }
    employee(int i){
        id = i;
        strcpy(name," ");
        salary = 0;
    }
    employee(char n[20]){
        id = 0;
        strcpy(name,n);
        salary = 0;
    }
    employee(int i , char n[20] , float s){
        id = i;
        strcpy(name,n);
        salary = s;
    }
    ~employee(){
        cout<<"Object released"<<endl;
        }
};

int main()
{
    int i ;
    char n[20];
    float s ;
    cout << "enter id : ";
    cin >> i ;
    cout << "enter name : ";
    cin >> n ;
    cout << "enter salary : ";
    cin >> s ;

    employee emp;

    emp.setId(i);
    emp.SetName(n);
    emp.SetSalary(s);

    cout << "your id is : "<< emp.getId()<<endl;
    cout << "your name is : " << emp.getName()<<endl;
    cout << "your salary is : " << emp.getSalary()<<endl;

}

void employee::setId(int i){
    this->id = i;
    }
void employee::SetName(char n[20]){
    strcpy(this->name, n);
    }
void employee::SetSalary(float s){
    this->salary = s;
    }

int employee::getId(){
    return this->id;
    }
char* employee::getName(){
    return this->name;
    }
float employee::getSalary(){
    return this->salary;
    }
