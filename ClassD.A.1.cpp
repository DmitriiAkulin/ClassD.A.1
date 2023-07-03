// ClassD.A.1
#include <Windows.h>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Calculator {
    public:
          double num1;
          double num2;
          
          //сложение          
          double add(double num1, double num2) {
              return (double)(num1 + num2);
          }
          //умножение
          double multiple(double num1, double num2) {
              return (double)(num1 * num2);
          }
          //num1 - num2
          double subtract_1_2(double num1, double num2){
              return (double)(num1 - num2);
          }
          //num1 - num2
          double subtract_2_1(double num1, double num2) {
              return (double)num2 - num1;
          }
          //num1 / num2
          double divide_1_2(double num1, double num2) {
              return (double)(num1 / num2);
          }
          //num2 / num1
          double divide_2_1(double num1, double num2){
              return (double)(num2 / num1);
          }
          //проверка на 0
          bool set_num1(double num1){
              if (num1 == 0) return false;
                else {
                 this -> num1 = num1; return true;
                }              
          }
          //проверка на 0
          bool set_num2(double num2) {
              if (num2 == 0) return false;
              else {
                  this->num2 = num2; return true;
              }
          }

};
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Calculator calc;
    //бесконечный цикл
    for(;;){
        //ввод и проверка num1
        while (true) {
            cout << "ВВедите num1: "; cin >> calc.num1;
            if(calc.set_num1(calc.num1)) break;
            else {
                cout << "Неверный ввод!\n";
            }
        }
        //ввод и проверка num2
        while (true) {
            cout << "ВВедите num2: "; cin >> calc.num2;
            if (calc.set_num2(calc.num2)) break;
            else {
                cout << "Неверный ввод!\n";
            }
        }


        cout << "num1 + num2 = " << calc.add(calc.num1, calc.num2) << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2(calc.num1, calc.num2) << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1(calc.num1, calc.num2) << endl;
        cout << "num1 * num2 = " << calc.multiple(calc.num1, calc.num2) << endl;
        cout << "num1 / num2 = " << calc.divide_1_2(calc.num1, calc.num2) << endl;
        cout << "num2 / num1 = " << calc.divide_2_1(calc.num1, calc.num2) << endl;


    }       
    return 0;
}
