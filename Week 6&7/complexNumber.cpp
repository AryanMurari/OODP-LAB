#include <iostream>
using namespace std;
class Complex_num
{
    // declare data member or variables
    int x, y;
    public:
        // create a member function to take input
        void inp()
        {
            cout << " Input a real Number: " << endl;
            cin >> x ;
            cout << " Input a imaginary Number: " << endl;
            cin >> y ;
        }
        // use binary '+' operator to overload
        Complex_num operator + (Complex_num obj)
        {
            // create an object
            Complex_num A;
            // assign values to object
            A.x = x + obj.x;
            A.y = y + obj.y;
            return (A);
        }
        // overload the binary (-) operator
        Complex_num operator - (Complex_num obj)
        {
            // create an object
            Complex_num A;
            // assign values to object
            A.x = x - obj.x;
            A.y = y - obj.y;
            return (A);
        }
        // display the result of addition
        void print()
        {
            cout << x << " + " << y << "i" << "\n";
        }

        // display the result of subtraction
        void print2()
        {
            cout << x << " - " << y << "i" << "\n";
        }
};
int main ()
{
Complex_num x1, y1, sum, sub; // here we created object of class Addition i.e x1 and y1
    // accepting the values
    x1.inp();
    y1.inp();
    // add the objects
    sum = x1 + y1;
    sub = x1 - y1; // subtract the complex number
    // display user entered values
    cout << "\n Entered values are: \n";
    cout << " \t";
    x1.print();
    cout << " \t";
    y1.print();
    cout << "\n Addition of two complex numbers: ";
    sum.print(); // call print function to display the result of addition
    cout << "\n Subtraction of two complex numbers: ";
    sub.print2(); // call print2 function to display the result of subtraction
    return 0;
}
