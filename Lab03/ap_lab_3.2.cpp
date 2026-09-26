// Lab_03_2.cpp
// Когут Роман
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 15

#include <iostream>
#include <cmath>
using namespace std;
int main()
 {

double a; //вхідний параметр
double b; // вхідний параметр
double c; // вхідний параметр
double x; // вхідний параметр
double F; // результат обчислень
 cout << "a = "; cin >> a;
 cout << "b = "; cin >> b;
 cout << "c = "; cin >> c;
 cout << "x = "; cin >> x; 
   // 1) спосіб - розгалуження у короткій формі 
if ( x < 0 && b!=0)
    F = -a * x * x + b;

if ( x > 0 && b == 0 )
    F = x / (x - c) + 5.5;

if (!(x < 0 && b!=0) && !(x > 0 && b == 0))
    F = x / (-c);

cout<<endl;
cout << "1) F = " << F << endl;

// 2) спосіб - розгалуження у повній формі

if ( x< 0 && b != 0)
     F = -a * x * x + b;
    
     if ( x > 0 && b == 0 )
        F = x / (x - c) + 5.5;
           
     else
        F = x / (-c);

        cin.get();
cout << "2) F = " << F << endl;   
return 0;

}