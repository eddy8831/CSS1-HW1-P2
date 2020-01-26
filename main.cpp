/* Title average.cpp
* Description: This program computes average of
*       three exams.
* Author: Eduardo Flores Aguirre
* Date: 03/9/2016
*/
#include <iostream>
using namespace std;
int main ()
{
    double num1;
    cout << "Enter curent salary " << endl;
    cin >> num1 ;
    
    double num2;
    cout << "Salary increas" << endl;
    cin >> num2;
    
    double increas = num1 * num2;
    double new_annual_salary = increas + num1;
    cout << "Salary increas is " << increas << endl;
    double new_monthly_salary = new_annual_salary / 12 ;
    cout << "New monthly salary is "<< new_monthly_salary<< endl;
    return 0;
    
}