//  2022-11-27
//      13:43 - 13:57

#include <iostream>
#include <cmath>
using namespace std;


// linspace_tab - same funcionality as in Python (C++ table/array instead of Python array)

double* linspace_tab(double start, double end, int number_of_steps) {

    double step = (end - start)/(number_of_steps-1);
    double* lin_arr = new double[number_of_steps];


    for (int i = 0; i < number_of_steps; i++) {
        lin_arr[i] = start + i * step;
    }

    return lin_arr;
}

// example of using linspace

double s = 3; 
double e = 15;
int n = 10;

int main() {
    
    double* example_arr = linspace_tab(s, e, n);

    for (int i = 0; i < n; i++) {
        cout << example_arr[i] << endl;
    }
    delete[] example_arr;

}





