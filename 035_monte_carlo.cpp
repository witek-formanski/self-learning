//  2022-11-28
//      13:03 - 13:24

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// linspace - same funcionality as in Python

vector <double> linspace_vect(double start, double end, int number_of_steps) {

    double step = (end - start)/(number_of_steps-1);
    vector <double> lin_vect;


    for (int i = 0; i < number_of_steps; i++) {
        lin_vect.push_back(start + i*step);
    }

    return lin_vect;
}

// monte_carlo_integral - calculates an integral of a function [func] from a to b

double monte_carlo_integral(double (*function)(double), double a, double b, int number_of_points) {
    // double a;
    // double b;
    double f_b = function(b);

    vector <double> x_linspace = linspace_vect(a, b, number_of_points);
    vector <double> y_linspace = linspace_vect(0, f_b, number_of_points);

    int counter = 0;
    for (int i = 0; i < number_of_points; i++) {
        double value = function(x_linspace[i]);
        for (int j = 0; j < number_of_points; j++) {
            double current_value = y_linspace[j];
            if (current_value <= value) {counter += 1;}
            else if (current_value >= value) {break;}
        }
    }
        
    double area = (b-a) * function(b);
    double ans = area * counter / pow(number_of_points,2);

    return ans;

}

// example of using monte_carlo_integral

double func(double x){
    return pow(x,2);
}

double func2(double x){
    return 3*pow(x,3)*sin(x);
}


int main() {

    cout << monte_carlo_integral(func, 3, 7, 1000) << endl;
    cout << monte_carlo_integral(func2, 3, 7, 1000) << endl;

}
