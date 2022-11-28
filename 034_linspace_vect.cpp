//  2022-11-28
//      12:53 - 13:01

#include <iostream>
#include <vector>
using namespace std;

// linspace_vect - same funcionality as in Python (C++ vector instead of Python array)

vector <double> linspace_vect(double start, double end, int number_of_steps) {

    double step = (end - start)/(number_of_steps-1);
    vector <double> lin_vect;


    for (int i = 0; i < number_of_steps; i++) {
        lin_vect.push_back(start + i*step);
    }

    return lin_vect;
}

// example of using linspace

double s = 3; 
double e = 15;
int n = 10;

int main() {
    vector <double> example_vect;
    example_vect = linspace_vect(s, e, n);

    for (int i = 0; i < n; i++) {
        cout << example_vect[i] << endl;
    }
}