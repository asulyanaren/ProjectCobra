#include <iostream>
#include <string>
#include <vector>
//#include "group.h"
//#include "worker.h"

class Worker{
   public:
   Worker(const std::string n, const std::string sn, int by)
      :m_name(n)
      ,m_surname(sn)
      ,born_year(by)
      {}
    ~Worker(){}
      int print(){
          return born_year;
       }
 
   private:
   std::string  m_name;
   std::string  m_surname;
   int          born_year;

};


class Group{
  public:
      Group(const std::string& name, int n)
                         :m_name(name)
                          ,m_num(n)
                                 {}
  
     void addworker(const Worker& worker){ m_worker.push_back(worker);}
     int get_born(int n){ return m_worker[n].print();}
     void print(){ std::cout<< m_name<<"\n"; }
  private:
      std::string  m_name;
      int           m_num;
      std::vector <Worker> m_worker;
 };

int main() {
    const int z = 1974;
    int n;
    std::vector <Group> groups;
    std::string name;
    std::string surname;
    std::string groupname;
    int born;
    int groupnumber;
    std::cin>>n;
  for(int i = 0; i < n; i++){
           std::cin>> groupname;
           std::cin>> groupnumber;
           Group g(groupname, groupnumber);
       for(int j = 0; j < groupnumber; j++){
              std::cin >> name >> surname  >> born;
               Worker w(name, surname, born);
               g.addworker(w);
              }
        groups.push_back(g);
    }
  
   bool check = false;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j < groupnumber; j++){
             if(groups[i].get_born(j) >  z){
             sum++;
             };
               if(sum == groupnumber){
                   groups[i].print();
                   check  = true;
                 }
           }
      }
      
      if(check == false){
        std::cout << "Not found!";
      }

}
