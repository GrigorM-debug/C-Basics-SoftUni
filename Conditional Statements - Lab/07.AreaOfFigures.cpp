#include <iostream>
using namespace std;
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES
int main() {
    string figure = "";
    cin >> figure;

    if (figure == "square"){
        double a, area;
        cin >> a;
        area = pow(a,2);
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area << endl;
    }
    else if (figure == "rectangle"){
        double a,b,area;
        cin >> a >> b;
        area = a*b;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area << endl;
    }
    else if (figure == "circle"){
        double radius, area;
        cin >> radius;
        radius = pow(radius , 2);
        area = radius * 3.14159265359;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area << endl;
    }
    else if (figure == "triangle"){
        double a,h,area;
        cin >> a >> h;
        area = (a*h) / 2;
        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area << endl;
    }

    return 0;
}