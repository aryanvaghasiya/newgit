#include <stdio.h>

float maxpointer(float *pa, float *pb, float *pc){
    if (*pa>*pb && *pa>*pc){
        return pa 
    }
    else if (*pb>*pa && *pb>*pc){
        return pb
    }
    else{
    return pc
    }
}


float main(){
    int a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    maxpointer(&a, &b, &c);
    printf("%p %p %p\n", a, b, c);
    printf("%p\n", maxpointer);
}