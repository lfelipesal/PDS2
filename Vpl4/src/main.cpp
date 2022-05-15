#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

// Tipo abastrato de dados que representa uma número complexo. 
class Complexo {
  // Atributos.
  private:
    double real;
    double imag;

  // Métodos.
  public:
    double inreal(double i){
        real = i;
    }
    double inimag(double i){

        imag = i;
    }
    double getreal(){
        return real;
    }
    double getimag(){
        return imag;
    }
    double modulo() {
        return sqrt(pow(real,2)+pow(imag,2));
    }
    Complexo conjugado() {
        imag = -imag;
    }
    Complexo inverso() {
        double real2 , imag2;
        real2 = pow(real,2);
        imag2 = pow(imag,2);
        real = real/(real2+imag2);
        imag= imag/(real2+imag2);
    }
    Complexo soma(Complexo y) {
        real = real + y.real;
        imag = imag + y.imag;
    }
    Complexo subtrair(Complexo y) {
        real = real - y.real;
        imag = imag - y.imag;
    }
    Complexo multiplicar(Complexo y) {
        real = real * y.real;
        imag = imag * y.imag;
    }
    Complexo dividir(Complexo y) {
        real = real / y.real;
        imag = imag / y.imag;
    }
};


pair<Complexo, Complexo> raizes(double a, double b, double c) {
    double delta, root1, root2;
    Complexo res1,res2;
    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            delta = -delta;
            root1 = -b/2*a;
            root2 = sqrt(delta)/2*a;
            res1.inreal(root1);
            res2.inreal(root1);
            res1.inimag(root2);
            res2.inimag(-root2);
            pair<Complexo, Complexo> r(res2,res1);
            return r;
        }
        else if (delta==0){
            root1=(-b)/(2*a);
            res1.inreal(root1);
            res2.inreal(root2);
            res1.inimag(0);
            res2.inimag(0);
            pair<Complexo, Complexo> r(res2,res1);
            return r;
        }else{
            root1=(-b - sqrt(delta))/(2*a);
            root2=(-b + sqrt(delta))/(2*a);
            res1.inreal(root1);
            res2.inreal(root2);
            res1.inimag(0);
            res2.inimag(0);
            pair<Complexo, Complexo> r(res2,res1);
            return r;
        }
    }

}

int main () {
  cout << "Digite os coeficientes da equação f(x) = ax^2 + bx + c:" << endl;
  double a, b, c;
  cin >> a >> b >> c;
  auto r = raizes(a, b, c);
  cout << "(" << r.first.getreal() << ", " << r.first.getimag() << ") "
       << "(" << r.second.getreal() << ", " << r.second.getimag() << ")" << endl;
  return 0;
}