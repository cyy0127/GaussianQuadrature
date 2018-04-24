// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


double f(double x) { return x*exp(x); }

double gaussQuad2(double f(double), double a, double b) {
    double x1 = ((b-a)*(-1/sqrt(3))+b+a)/2;
    double x2 = ((b-a)*(1/sqrt(3))+b+a)/2;
    double result = (b-a)/2 * (f(x1) + f(x2));
    return result;
}

int main() {
    double a, b;
    cout<< "Enter integration limits a and b: ";
    cin >> a >> b;
    double ans = gaussQuad2(f, a, b);
    cout<< "The integral is: " << ans <<endl;
    return 0;
}