#include <stdio.h>


//Function that calculates the array's sum
int sum(int array[], int size)
{
  int total = 0;

  for (int i = 0; i < size; i++)
    {
      total += array[i];

    }
  return total;

}


//Function that finds the maximum value in the array
int maximum(int array[], int size)
{
  int max = array[0];

  for (int i= 0; i < size; i++)
    {
      if (array[i] > max)
	{
	  max = array[i];

	}
    }
  return max;

}


int main(void)
{
  int numbers[5] = { 10, 20, 30, 40, 50};
  char name[] = "Cedric";

  int result;
  result = sum(numbers, 5);

  int max_value;
  max_value = maximum(numbers, 5);

  

  printf("Name : %s\n", name);
  printf("Sum : %d\n", result);
  printf("Maximum : %d\n", max_value);

  
  return 0;

}
