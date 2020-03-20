#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

string rownanieKwadratowe(int a, int b, int c) {
    double delta;
    string result;
    delta = pow(b, 2) - 4 * a * c;
    cout << "Delta: " << delta << endl;
    double xw = (-b) / (2 * a);
    double yw = (-delta) / (4 * a);
    cout << "Wspolrzedne wierzcholka: w1= " << xw << ", w2= " << yw << endl;
    if (delta > 0) {
        double pDelta = sqrt(delta);
        cout << "Pierwiastek: " << pDelta << endl;
        double x1 = (-b - pDelta) / (2 * a);
        double x2 = (-b + pDelta) / (2 * a);
		stringstream s1;
        stringstream s2;
        s1 << x1;
        s2 << x2;
        result = "Dwa pierwsiastki rzeczywiste: x1 = " + s1.str() + " oraz x2= " + s2.str();
    } else if (delta == 0) {
        double x0 = -b / (2 * a);
        stringstream s1;
        s1 << x0;
        result = "Pierwiastek rzeczywisty x0= " + s1.str();
    } else {
        result = "Brak rozwiazania.";
    }

    return result;
}

int main(int argc, char **argv) {
    int a, b, c;
    cout << "Program do liczenia rownania kwadratowego: ax^2 + bx + c" << endl;
    cout << "a= ";
    cin >> a;
    while (a == 0) {
        cout << "Niewlasciwa wartosc. Podaj ponownie: ";
        cin >> a;
    };
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    cout << rownanieKwadratowe(a, b, c) << endl;
    system("pause");
    return 0;
}
