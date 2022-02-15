#include <iostream>
//#include "MyMultiply.h"

using namespace std;

template <class T> class myMultiply
{
    private:
        T  x;    //initializing private variables using the template based tyype
        T  y;

    public:

        myMultiply(T x, T y){     // a template class constructor
            x = 0;
            y = 0;
        };
        virtual ~myMultiply();   // destructor

        T  doMultiply(){        // a template function that multiplies two objects
            return x*y;
        }

        void set_x(T  a){       // Setters and getters
            x = a;
        }

        T get_x(){
            return x;
        }

        void set_y(T a){
            y = a;
        }

        T get_y(){
            return y;
        }
    protected:

};




int main(){
    // Instantiating the template objects and initialization of data variables
    myMultiply <float> m1(0, 0);
    myMultiply <int> m2(0, 0);
    myMultiply <double> m3(0, 0);

    m1.set_x(35.667);
    m1.set_y(2.11);

    cout << "multiply floats: " << m1.get_x() << " * " << m1.get_y() << " = " << m1.doMultiply() << endl;

    m2.set_x(3);
    m2.set_y(2);

    cout << "multiply ints: " << m2.get_x() << " * " << m2.get_y() << " = " << m2.doMultiply() << endl;

    m3.set_x(22345.6759);
    m3.set_y(7);

    cout << "multiply double: " << m3.get_x() << " * " << m3.get_y() << " = " << m3.doMultiply() << endl;

    return 0;
}

