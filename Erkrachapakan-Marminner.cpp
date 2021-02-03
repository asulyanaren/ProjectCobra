#include <iostream>
#include <string>
#include <vector>
//#include "shape.h"
//#include "ball.h"
//#include "pyramid.h"
//#include "cube.h"
using namespace std;

class Shape{
  public:
  virtual ~Shape(){}
  virtual float getvolume()=0;
};

class Pyramid{
  public:
  Pyramid(float base, float width)
  :m_base(base)
  ,m_width(width)
  {}
  virtual ~Pyramid(){}

   //double height = m_width / 2;
  virtual  float getvolume(){
   return (0.3333333) * (m_base * m_base * m_width);
   ;
      }
 
 private:
 float m_base;
 float m_width;
};

class Cube{
public:
Cube(float cub)
:m_cube(cub)
{}
virtual ~Cube(){}

  
 virtual float getvolume(){
    return m_cube * m_cube * m_cube;
  }
   
private:
float m_cube;
};

class Ball{
  public:
  Ball(float bal)
  :m_ball(bal)
  {}
 
 virtual ~Ball(){}

  float p = 3.1415;
  virtual float getvolume(){
    return (4 * p * m_ball * m_ball * m_ball) / 3 ; 
  }
    private:
   float m_ball;
};

int main() {
    int n;
    string name;
    std::vector<float> m_shape;
   std::cin >>n;   
    for(int i=0; i < n; i++){
           std::cin >> name;
           if(name == "Ball"){
                float b;
                std::cin >>b;
                Ball l(b);
                m_shape.push_back(l.getvolume());
             }         
         
           if(name == "Cube"){
              float c;
              std::cin >> c;
              Cube u(c);
              m_shape.push_back(u.getvolume());
             }
            if(name == "Pyramid"){
               float e;
               float c;
               std::cin>> e >> c;
               Pyramid p(e, c);
               m_shape.push_back(p.getvolume());
               }
         } 
      
      // std::cout<<"\n";
         float sum = 0;
         /*
         for(int i =0; i < n; i++){
         std::cout<< m_shape[i]<< "  ";
         }
        // std::cout<<"\n\n";
        */
         for(int i=0; i < n; i++){
            sum = sum + m_shape[i];
           }
         std::cout << sum;
}