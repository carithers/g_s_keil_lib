/**
  ******************************************************************************
  * File Name       : 
  * Author          : c
  * Description     : 
  * Data            : 
  ******************************************************************************
  * 
  * 
  ******************************************************************************
  */
#ifndef __KALMAN_H
#define __KALMAN_H




typedef struct {
    float r;
    float q;
    float out;
    float kg;
    float p;
}st_kalman_typedef;




float kalman_filter(st_kalman_typedef *v, float m);



#endif













