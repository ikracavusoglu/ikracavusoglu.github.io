#include <stdio.h>
#include <math.h>

void computeHomeValue(void);

int main()
{
  computeHomeValue();
  return 0;
}

void computeHomeValue(void)
{
  int popularity, size;
  printf("Enter the popularity of the land:");
  scanf("%d",&popularity);
  printf("Enter the size of the house:");
  scanf("%d",&size);
  int homeValue;
  homeValue = ( pow(popularity,3) + pow(size,2)  ) * 10000;
  printf("The housing price in a particular neighborhood is %d.", homeValue);
}
