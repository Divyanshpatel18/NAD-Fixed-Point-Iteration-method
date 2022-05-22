#include<stdio.h>
#include<conio.h>
#include<math.h>
float f (float x)
{  
return (x*x-x-1);
}
/* Defining derivative of g(x). As you change f(x), change this function also. */
float g(float x)
{
 return(1/(x-1));
}
int main()
{   int i=1, N;
    float b,m, e;
    clrscr();      /* Inputs */    
      printf("Enter initial guess: ");
    scanf("%f", &b);
    printf("Enter tolerable error: ");
    scanf("%f", &e);
    printf("Enter maximum iteration: ");
    scanf("%d", &N);      /* Implementing Fixed Point Iteration */      printf("\nStep\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do      {
        
        printf("%d\t%f\t%f\t%f\t%f\n",i,b,f(b),m,f(m));
        i = i+ 1;
        if(i>N)        
          {
            printf("Not Convergent.");
            exit(0);
        }
        b= m;
    }
    while( fabs(f(m)) > e);
    printf("\nRoot is %f", m);
    getch();
    return(0);
}