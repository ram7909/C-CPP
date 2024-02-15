#include<iostream>
using namespace std;
class Shape
{
    public:
    void Base()
    {
        cout<<"\nShape -:";
        cout<<"\nColor -:";
        cout<<"\nArea -:";
    }
};
class Circle:public Shape
{
  public:
  void circle()
  {
      float p=3.14,r=5;
      cout<<"\n\nCircle";
      cout<<"\nRed";
      cout<<"\n"<<p*r*r;
  }
};
class Rectangle:public Shape
{
  public:
  void rectangle()
  {
      int l=3,b=5;
      cout<<"\n\nRectangle";
      cout<<"\nGreen";
      cout<<"\n"<<l*b;
  }
};
class Triangle:public Shape
{
  public:
  void triangle()
  {
      float b=6,h=7;
      cout<<"\n\nCircle";
      cout<<"\nBlue";
      cout<<"\n"<<0.5*b*h;
  }
};
int main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    c.Base();
    c.circle();
    r.rectangle();
    t.triangle();
    return 0;
}