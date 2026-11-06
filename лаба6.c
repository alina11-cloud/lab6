#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
	setlocale(LC_CTYPE, "RUS");
	nom1();
	nom2();
    homework();
	return 0;
}

int nom1() {
	int years;
	puts("Введите год:");
	scanf("%d", &years);
	if (years % 4 == 0 ) printf("год %d - високосный\n", years);
	else printf("год %d - не високосный\n", years); 

    if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)) {
        printf("год %d - високосный\n", years);}
    else 
    { printf("год %d - не високосный\n", years); }

}
// 6
int nom2() {
	// x = 7, f(x) = 12; x = 9, f(x) = 0.012987; x = -6, f(x) = -27
	double x, fx, a, b;
	puts("Введите переменную x:");
	scanf("%lf", &x);
	a = 3*x-9;
	b = 1/(pow(x,2)-4);
	fx = (x <=7) ? a : b;
	printf("F(%g) = %g\n", x, fx);
}
int homework() {
    int N;
    puts("Введите число N (N < 1000):");
    scanf("%d", &N);
    if (N < 0) N = -N;
    if (N < 10) {
        if (N == 5) 
            printf("Цифра 5 входит в число %d", N);
        else 
            printf("Цифра 5 не входит в число %d", N);
    }
    if (N >= 10 && N < 100) {
        if (N % 10 == 5 || N / 10 == 5)
            printf("Цифра 5 входит в число %d", N);
        else
            printf("Цифра 5 не входит в число %d", N);
    }
    if (N >= 100) {
        if (N / 100 == 5 || (N / 10) % 10 == 5 || N % 10 == 5)
            printf("Цифра 5 входит в число %d", N);
        else
            printf("Цифра 5 не входит в число %d", N);
    }
}