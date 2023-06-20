#include "main.h"
/*
 * int print_sign - determines  if  a number is positive,negative or equal to 0
 */
int print_sign(int n)
{
if(n>0)
{
_putchar('+');
return(1);
}else if(n==0)
{
_putchar('0');
return(0);
}
else
{
_putchar('-');
return (-1);
}
