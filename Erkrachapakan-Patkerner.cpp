#include <iostream>
#include <vector>
#include <string>
//#include "shape.h"
//#include "circle.h"
//#include "rectangle.h"
//#include "triangle.h"

class Shape{
 public:
 ~Shape(){};
 virtual double getarea() = 0;
 };

class Triangle: public Shape{
  public:
  Triangle(double a, double b)
    :m_a(a)
    ,m_b(b)
   
  {}
  virtual ~Triangle(){}

  virtual double getarea(){
     return  (m_a * m_b) / 2;
     }

private:
double m_a;
double m_b;
};

class Rectangle: public Shape{
  public:
  Rectangle(double a, double b)
  :m_a(a)
  ,m_b(b)
  {}
 
 virtual ~Rectangle(){}
 
 virtual double getarea(){
       return m_a * m_b;
   }
  
  private:
  double m_a;
  double m_b;
};

class Circle: public Shape{
  public:
   Circle(double a)
   :m_a(a)
   {}
virtual ~Circle(){}
   
  double p = 3.1415;
virtual double getarea(){
      return  p * (m_a * m_a);
     }
  private:
  double m_a;  
};
int main() {
   
    std::vector<double>  m_shape;    
    int n;
    std::string  name;
     std::cin>>n;
   // Shape* ptr = new Shape[n];
   for(int i=0; i<n; i++){
        std::cin >> name;
         if(name == "Circle"){
           double a;
           std::cin >> a;
           Circle c(a);
           double e = c.getarea();
           m_shape.push_back(e);
            }
         if(name == "Triangle"){
                double b, c;
                std::cin >> b>>c;
                Triangle t(b,c);
                double u = t.getarea();
                m_shape.push_back(u);
               } 
         if(name =="Rectangle"){
                double d, e;
                std::cin>> d >>e;
                Rectangle r(d,e);
                double l = r.getarea();
                m_shape.push_back(l);
             } 
    }
   
    bool swap;
    do{
          swap = false;
          for(int i=0; i < n-1; i++){
               if(m_shape[i] > m_shape[i+1]){
               double temp = m_shape[i];
               m_shape[i] = m_shape[i+1];
               m_shape[i+1] = temp;
               swap =true;
               }
            }
         }
    while(swap);
    
    
     for(int i=0; i<n; i++){
       std::cout << m_shape[i] << " ";
     }

}