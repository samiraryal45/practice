#include <stdio.h>

typedef struct 
{
    float real;
    float img;
}Complexno;


void createcomplex(Complexno n){

    printf("%.2f + %.2fi\n",n.real,n.img);
}
int main()
{
    Complexno c = {4.00,5.00};
    createcomplex(c);
    
    return 0;
}
