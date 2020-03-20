#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void rownanieKwadratowe(int a, int b, int c)
{
    double delta;
    delta = pow(b,2) - 4*a*c;
    cout<<"Delta: "<< delta << endl;
    double xw=(-b)/(2*a);
    double yw=(-delta)/(4*a);
    cout<<"Wspolrzedne wierzcholka: w1= "<< xw << ", w2= " << yw << endl;
    if (delta > 0)
    {
        double pDelta=sqrt(delta);
        cout << "Pierwiastek: " << pDelta << endl;
        double x1=(-b-pDelta)/(2*a);
        double x2=(-b+pDelta)/(2*a);
        cout<<"Dwa pierwsiastki rzeczywiste: x1 = "<< x1 <<" oraz x2= "<< x2 << endl;
    } else if(delta == 0)
    {
        double x0=-b/(2*a);
        cout<<"Pierwiastek rzeczywisty x0= "<<x0 << endl;
    } else
    {
        cout<<"Brak rozwiazania." << endl;
    }
}

int main(int argc, char** argv) {
    int a, b, c;
    cout<<"Program do liczenia rownania kwadratowego: ax^2 + bx + c" << endl;
    cout<<"a= ";
    cin>>a;
    while (a == 0) {
        cout<<"Niewlasciwa wartosc. Podaj ponownie: ";
        cin>>a;
    };
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    rownanieKwadratowe(a, b, c);
    system("pause");
    return 0;
}
