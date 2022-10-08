#include <iostream>
using namespace std;

/*Osama Salem
  COSC-1436-57001*/

struct Car{
  string make;
  string model;
  int year;
  string color;
};

void colorChange(Car *a);

int main() {

  Car car1 = {"Porsche", "911", 2022};
  Car car2 = {"Dodge", "Demon", 2018};
  Car car3 = {"Nissian", "Skyline GTR", 2000};

  colorChange(&car1);
  colorChange(&car2);
  colorChange(&car3);

  cout << "\nMake: " << car1.make << "\nModel: " << car1.model << "\nYear: "  << car1.year << "\nColor: " << car1.color << endl;
  cout << "\nMake: " << car2.make << "\nModel: " << car2.model << "\nYear: "  << car2.year << "\nColor: " << car2.color << endl;
  cout << "\nMake: " << car3.make << "\nModel: " << car3.model << "\nYear: "  << car3.year << "\nColor: " << car3.color << endl;

  return 0;
}

void colorChange(Car *a){
  if(a->year > 2010)
    a->color = "GREEN";
  else
    a->color = "RED";
}