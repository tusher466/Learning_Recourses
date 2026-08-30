//Test all variable 

#include<stdio.h>
int main()
{
    int num;
    float pi;
    double fraction;
    char ch;

    num = 20;
    pi = 3.1415;
    fraction = 3.141569782568;
    ch = 'A';

    printf("num = %d\npi = %f\nfraction = %.15lf\nchar = %c\n", num, pi, fraction, ch);

    return 0;

}