#include <stdio.h>
#include <math.h>
int computeHomeValue(int popularity,int size,int homeValue);
int main()
{
  int popularity,size,homeValue;
  printf("Please enter the popularity ");
  scanf("%d", &popularity);
  printf("Please enter the size ");
  scanf("%d", &size);
  homeValue=(pow(popularity,3)+pow(size,2))*10000;
  printf("The homevalue is %d",homeValue);
  return 0;
}
int computeHomeValue(int popularity,int size,int homeValue)
{
    return(popularity*popularity*popularity+size*size)*1000;
}
