#include "kalman.h"



float kalman_filter(st_kalman_typedef *v, float m)
{
    v->p = v->p + v->q;
    v->kg = v->p / (v->p + v->r);
    v->out += v->kg * (m - v->out);
    v->p *= (1 - v->kg);
    
    return v->out;
}



