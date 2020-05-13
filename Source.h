#pragma once

#include<iostream>
#include<string>
#include<math.h>

void inputData(int& var_x1,const char* str_x1, int& var_y1, const char* str_y1, int& var_b1,
    const char* str_b1);
 
double getDet(int& x1, int& x2, int& y1, int& y2);

void outputData(float& detA, const char* str_detA, float& detX, const char* str_detX, float& detY, const char* str_detY);

