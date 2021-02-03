#include <iostream>
#include <vector>
#include <string>
//#include "group.h"

class Student
  {
     public:
     Student(const std::string& n, const std::string& sn, int* marks)
     :m_name(n)
     ,m_surname(sn)
     {
        for(int i=0; i < 5; i++){
           m_marks[i] = marks[i];
           }
     }

     int getSumOfMarks()const 
           {
         int sum = 0;
         for(int i=0; i<5; i++){
              sum = sum + m_marks[i];
            }
           return sum;
         }

     private :
     std::string m_name;
     std::string m_surname;
     int        m_marks[5];
 
 }; 


class Group{

public:
Group(const std::string& name)
    :m_name(name)
    {}
  void addstudent(const Student& student ){
          m_students.push_back(student);
        }

  float average()const
       {
       const int stutentcount = m_students.size();
       int sum =0;
      for(int i=0; i < stutentcount; i++){
       sum = sum + m_students[i].getSumOfMarks();
       }
          return (float)sum / stutentcount;
         }

 
  std::string get_name()const{
      return m_name;
   }
 
private:
    std::string  m_name;
    std::vector<Student> m_students;
};



int main() {
   int n;
   std::cin >> n;
   std::vector <Group> groups;
   std::string classname;
   std::string name;
   std::string surname;
   int studecount;
   int marks[5]={};
  
   for(int i = 0; i < n; i++){
      std::cin >> classname;
      Group g(classname);
      std::cin >> studecount;
      
      for(int j=0; j < studecount; j++){
            std::cin >> name >>surname;
            for(int k = 0; k < 5; k++){
                   std::cin >> marks[k];
                   }
                  Student s(name, surname, marks);
               g.addstudent(s);
               }
            groups.push_back(g);
          }
    
     double max = 0;
     std::string  bestGroup;
    for(int i = 0; i < n; i++){
      const double avg = groups[i].average();
      if(avg > max){
       max = avg;
       bestGroup = groups[i].get_name();
       }
     }
     std::cout<< bestGroup <<std::endl;
   
    return 0;
}