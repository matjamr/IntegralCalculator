#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define lp 10000

double c_od,c_do;

double randomNumber(double from, double to) {
    double interval =  to - from;
    double x = rand() / (double) RAND_MAX * interval + from;
    return x;
}

double f3(double x)
{
 return x*exp(2.*x);
}      
double f4(double x) {

 return sqrt(x*x + 3.);
}

// Sposob f((x1+x2)/2)
double prostokaty(double( *f)(double))
{
    double step, p, sum=0;
    step= (c_do - c_od) / lp;
    for(p=c_od; p<c_do; p+=step)
        sum+=(*f)((p + p + step) / 2.);
    return sum * step;
}

double trapezy(double (*f)(double))
{
    double step, i, sum;
    step = (c_do - c_od) / lp;
    sum = (1 / 2.) * ((*f)(c_od) + (*f)(c_do));
    for(i = c_od+step; i<c_do; i += step) {
        sum += (*f)(i);
    }
    return sum*step;
}
       
double mc(double(*f)(double))
{
    double step, i, field, f_min = 0, f_max = 0, f_i;
    double x, y, n=0, n_tries = lp;
    step = (c_do - c_od) / lp;

    // szukanie max min funkcji
    for(i=c_od; i<=c_do ; i+=step) {
        f_i = (*f)(i);
        if(f_i > f_max) {
            f_max = f_i;
        } else if(f_i < f_min) {
            f_min = f_i;
        }
    }


    // Ustawianie f_min lub f_max w zaleznosci od roznych przypadkow
    if(f_max > 0 && f_min > 0) {
        f_min = 0;
    } else if(f_max < 0 && f_min < 0) {
        f_max = 0;
    }

    // glowna petla liczaca n n_tries razy
    for(i=0;i<n_tries;i++) {
        x = randomNumber(c_od, c_do);
        y  = randomNumber(f_min, f_max);
        if(y > 0 && (*f)(x) >=  y) {
            n++;
        } else if(y < 0 && (*f)(x) <= y) {
            n--;
        }
    }

    field = (c_do - c_od) * (f_max - f_min);
    return field*n/n_tries;
}

