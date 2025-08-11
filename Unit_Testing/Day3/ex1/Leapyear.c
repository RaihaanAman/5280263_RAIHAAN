#include "leapyear.h"
#include "unity.h"

int IsLeapYear(int yy){
    if(yy < 0){
        return -1;
    }

    if(yy % 4 == 0){
        if(yy % 100 == 0){
            if(yy % 400 == 0){
                return 1; // Divisible by 400 is leapyear
            }else{
                return 0; //  Divisible by 100 but not by 400 is  not leapyear
            }
        }
        return 1; // Divisible by 4 but not by 100 is leapyear
    }
    return 0; // not Divisible by 4 is not leapyear
}