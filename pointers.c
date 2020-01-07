#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
float d;
float* ptrtod;
float e;
float* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;

  a = 5;
  printf("The value of a is %d\n", a);
  d = 10;
  printf("The value of d is %f\n", d);
  e = 20;
  printf("The value of e is %f\n", e);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);
  *ptrtod = 11;
  printf("The value of d is %f\n", d);
  *ptrtoe = 21;
  printf("The value of e is %f\n", e);

 float temp;
temp = *ptrtoe;
*ptrtoe = *ptrtod;
*ptrtod = temp;

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
  printf("The value of d is %f\n", d);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of a is %f\n", &d);
  printf("The value of e is %f\n", e);
  printf("It stores the value %f\n", *ptrtoe);
printf("The address of a is %f\n", &e);


}
