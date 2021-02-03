#include <iostream>
#include <string>
#include <vector>
//#include "person.h"
//#include "employee.h"



class Person{
   public:
   Person(const std::string n, const std::string sn, int age)
       :m_name(n)
       ,m_surname(sn)
       ,m_age(age)
   {}
   ~Person(){}
   
   protected:
   std::string  m_name;
   std::string  m_surname;
   int          m_age;

};
class Employee: public Person{
   public:
   Employee(const std::string& n, const std::string& sn, int age, int ashx)
   :Person(n, sn, age)
   ,m_ashx(ashx)
   {}
   ~Employee(){}

   int get_ashx(){
     return m_ashx;
   }

  int get_age(){
    return m_age; 
    }
   void printt(){
     std::cout << m_surname <<"\n";
   }

   private:
   int m_ashx;
};

int main() {
     int n;
     std::string name;
     std::string surname;
     int age;
     int ashx;
     std::vector <Employee> m_employee;
     int max = 0;
     int minage = 0;
     //int y = 0;
     std::cin >>n;
     for(int i=0; i<n; i++){
          std::cin >> name >> surname >> age >> ashx;
          Employee e(name, surname,  age,  ashx);
          m_employee.push_back(e);
       }
     
      for(int i=0; i<n; i++){
          if(m_employee[i].get_ashx() > max){
              max  = m_employee[i].get_ashx();
              }
        }
         for(int i=0; i<n; i++){
          if(m_employee[i].get_age() > minage){
             minage = m_employee[i].get_age();
            }
          }

   bool swap = false;
        for(int i=0; i<n; i++){
          if(m_employee[i].get_ashx() >= max && m_employee[i].get_age()>=minage){
                m_employee[i].printt();
                swap = true;
             }
          }

       if(swap == false){
           std::cout << "Not found!";
          }

} 