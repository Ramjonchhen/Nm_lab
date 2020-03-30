// program to find the root of the eqn using bisection method

#include <stdio.h>
#include <stdlib.h>

// structure for the polynomial
struct expression
{
    float coefficient;
    float power;
};

struct polynomial
{
    int n;
    struct expression* p;
};


int main()
{
    // taking the function input from the user
    struct polynomial obj;
    printf("Enter the no of terms for the function: ");
    scanf("%d",&obj.n);
    // defining the functions and it's coefficient
    obj.p=(struct expression*)malloc(obj.n*sizeof(struct expression));
    // taking the input for the function
    for (int i=0; i<obj.n; i++)
    {
        printf("\n Enter the values of the coefficient of %d term :",i+1);
        scanf("%d",&obj.p[i].coefficient);
        printf("\n Enter the values of the power of of %d term :",i+1);
        scanf("%d",&obj.p[i].power);
    }
    return 0;
}
