#include <stdio.h>

double addition(double firstNumber, double secondNumber)
{
  return firstNumber + secondNumber;

}

double substraction(double firstNumber, double secondNumber)
{
  return firstNumber - secondNumber;

}

double multiplication(double firstNumber, double secondNumber)
{
  return firstNumber * secondNumber;

}

double division(double firstNumber, double secondNumber)
{
  if ( secondNumber == 0)
    {
      puts("Invalid operation");

      return 1;

    }
  return firstNumber / secondNumber;

}


void calculatrice()
{
  double fNumber = 0.0;
  double sNumber = 0.0;
  double result = 0.0;
  int choice;
  

  puts("=== CALCULATRICE ===");

  puts("Enter your first number.");
  scanf("%lf", &fNumber);

  puts("Enter your second number");
  scanf("%lf", &sNumber);


  puts("=== THE TYPE OF OPERATION ===");
  puts("1. Addition");
  puts("2. Substraction");
  puts("3. Multiplication");
  puts("4. Division");

  puts("What type of operation you would to do ? (choose by typing a number)");
  scanf("%d", &choice);

  

  switch(choice)
    {
    case 1:
      puts("You have chosen addition operation");

      result = addition(fNumber, sNumber);
      printf("%.2f + %.2f = %.2f\n", fNumber, sNumber, result);
      break;

    case 2:
      puts("You have chosen subtraction operation");

      result = substraction(fNumber, sNumber);
      printf("%.2f - %.2f = %.2f\n", fNumber, sNumber, result);
      break;

    case 3:
      puts("You have chosen multiplication operation");

      result = multiplication(fNumber, sNumber);
      printf("%.2f x %.2f = %.2f\n", fNumber, sNumber, result);
      break;

    case 4:
      puts("You have chosen division");

      result = division(fNumber, sNumber);
      printf("%.2f / %.2f = %.2f\n", fNumber, sNumber, result);
      break;

    default:
      puts("Invalid choice !");
      break;

    }

}
  




int main(void)
{
 
  calculatrice();
  


  return 0;

}
