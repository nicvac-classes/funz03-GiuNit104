#include <iostream>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);
double calcoloArea(double n1);
double calcoloCirconferenza(double n1);

int main() {
    double r1, r2, area1, area2, circonferenza1, circonferenza2;

    cout << "Inserire il raggio del primo cerchio:" << endl;
    cin >> r1;
    cout << "Inserisci il reggio del secondo cerchio:" << endl;
    cin >> r2;
    area1 = calcoloArea(r1);
    area2 = calcoloArea(r2);
    circonferenza1 = calcoloCirconferenza(r1);
    circonferenza2 = calcoloCirconferenza(r2);
    cout << "L'area del primo cerchio è di " << area1 << " e la circonferenza di " << circonferenza1 << endl;
    cout << "l'area del secondo cerchio è di " << area2 << " e la circonferenza è di " << circonferenza2 << endl;
    return 0;
}

double calcoloArea(double n1) {
    double area;

    area = 3.14 * (n1 * n1);
    
    return area;
}

double calcoloCirconferenza(double n1) {
    double circonferenza;

    circonferenza = 2 * 3.14 * n1;
    
    return circonferenza;
}

