#include <iostream>

using namespace std;
/*
int tabulacion(int n){

    int a ,  b, c, d, e;
    a=n/10000;
    b=((n-a)/10000)/1000;
    c=(((n-a)/10000)/1000)/100;
    d=((((n-a)/10000)/1000)/100)/10;
    e=n%10;
    cout << a << '\t' << b << '\t' << c << '\t' << d << '\t' << e << '\t';
    return 0;
}

int main(){
    int n;
    cout << "Ingrese un numero de 5 digitos: " ;
    cin >> n;
    tabulacion(n);
}
int digitos(int);

main(){

    cout << "Ingrese un numero: "  ;
    int d;
    cin >> d;
    cout << "Los digitos de " << d << " es: " << digitos(d);

}

int digitos(int d){
    int c = 0;
    while (d!=0){
        d=d/10;
        c++;
        }
    return c;

}*/
void palindromo(int);
main(){
    cout <<"Introduce un numero: ";
    int a,
    cin >> a;
    cout << palindromo(a) << " es palindromo";
}

void palindromo(int i){
    int b=i[::-1];
    if (b==i & i ==b){
        cout << "es palindromo";
    }
}

