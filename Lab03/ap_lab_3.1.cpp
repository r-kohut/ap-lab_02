// Lab_03_1.cpp
// < Когут Роман >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x; //вхідний параметр
  double y; // результат обчислень
  double B; // функціональна змінна виразу 
  double A; // функціональна стала виразу

  cout << "x = "; cin >> x;
  A = pow(x , 3) + 2;

  // 1) спосіб - розгалуження у короткій формі
  if (x < 4)
  B = 5 * pow (x , 8) + pow(x , 6) - x*x +3;
  
  if ( 4 <= x && x <7)
  B = atan (fabs((x + 3)/2.0)) + 7*x;

  if (x >= 7)
  B = log10( 2*x + exp( 5*x + 5));

  y = A + B;
  cout << " 1) y = " << y << endl;

  // 2) спосіб - розгалуження у повній формі
  if (x < 4)
    B = 5 * pow (x , 8) + pow(x , 6) - x*x +3;
  else
    if ( 4 <= x && x <7)
      B = atan (fabs((x + 3)/2.0)) + 7*x;
    else
      B = log10( 2*x + exp( 5*x + 5));

  y = A + B;
  cout << " 2) y = " << y << endl;
}