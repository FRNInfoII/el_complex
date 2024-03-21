#include <stdio.h>
#include "my_complex.h"
struct my_complex Sumacomplejos(struct my_complex z1,struct my_complex z2)
{
    struct my_complex suma;
    suma.re=z1.re+z2.re;
    suma.im=z1.im+z2.im;

    return suma;
}
struct my_complex Restacomplejos(struct my_complex z1,struct my_complex z2)
{
    struct my_complex resta;
    resta.re=z1.re-z2.re;
    resta.im=z1.im-z2.im;

    return resta;
}
struct my_complex MultiplicaComplejos(struct my_complex z1, struct my_complex z2)
{
    struct my_complex multi;
    multi.re=(z1.re * z2.re) - (z1.im * z2.im);
    multi.im=(z1.re * z2.im) + (z1.im * z2.re);
    
    return multi;
}

struct my_complex Conjugado(struct my_complex z1)
{
    struct my_complex conju;
    conju.re=z1.re;
    conju.im=-z1.im;

    return conju;
}

