#include<bits/stdc++.h>
using namespace std;


int main () {

    float num2 = 3.5f;
    float num3 = 3E-5f; // 3x10^-5
    // We must add the suffix f or F at the end of a float value
    // This is because the compiler interprets decimal values without the suffix as double.

    // Creating a double type variable
    double a = 3.912348239293;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Setting the precision to 12 decimal places
    cout << setprecision(13);
    // However, since float has a precision of up to only 7 digits, it shows garbage values after its precision is exceeded.
    // Our double variable shows the correct number because it has a precision of 15 digits, while the number itself consists of 13 digits.

    // scientific and fixed format

    double a = 3.912348239293;

    // Creating an exponential double type variable
    double ex1 = 325e+2;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Creating an exponential float type variable
    float ex2 = 325e+2f;

    // Displaying output with fixed
    cout << "Displaying Output With fixed:" << endl;
    cout << "Double Type Number 1 = " << fixed << a << endl;
    cout << "Double Type Number 2 = " << fixed << ex1 << endl;
    cout << "Float Type Number 1  = " << fixed << b << endl;
    cout << "Float Type Number 2  = " << fixed << ex2 << endl;

    // Displaying output with scientific
    cout << "\nDisplaying Output With scientific:" << endl;
    cout << "Double Type Number 1 = " << scientific << a << endl;
    cout << "Double Type Number 2 = " << scientific << ex1 << endl;
    cout << "Float Type Number 1  = " << scientific << b << endl;
    cout << "Float Type Number 2  = " << scientific << ex2 << endl;


    // Apart from float and double, there is another data type that can store floating-point numbers. This is known as long double.
    // It usually occupies a space of 12 bytes (depends on the computer system in use), and its precision is at least the same as double,
    // though most of the time, it is greater than that of double.
    // long double values should end with L. 

    long double num_ldb = 2.569L;

    // There is no long float

    
    return 0;
}