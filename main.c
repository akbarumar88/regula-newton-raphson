#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
    return pow(x, 2) - exp(x) + 3;
}

int main()
{
    printf("Program Regula Falsi dan Newton Raphson !\n\n");
    regulaFalsi();

    /*
    double a=1, b=2;
    double c = (f(b)*a - f(a)*b) / (f(b) - f(a));
    double Fc = f(c);
    printf("c: %f, Fc: %f", c, Fc);
    printf("f(c) is %f", f(c));
    */

    return 0;
}

void printKolom() {
    printf("a           c           b           F(a)            F(c)            F(b) \n\n");
}

void regulaFalsi() {
    double a=1, b=2, c;
    double errorTolerant = 0.0000001, Fc;
    printKolom();
    do {
        c = (f(b)*a - f(a)*b) / (f(b) - f(a));
        Fc = f(c);
        // Tampilkan Value
        printf("%.7f    %.7f    %.7f    %.7f    %.7f    %.7f \n", a,c,b,f(a),Fc,f(b));

        if (f(a) * Fc > 0) {
            a = c;
        } else {
            b = c;
        }
    } while (Fc > errorTolerant);

    printf("\n");
    printf("Nilai akar dari F(x) = x^2 - e^x + 3 adalah : %.7f", c);
}

void newtonRaphson() {

}
