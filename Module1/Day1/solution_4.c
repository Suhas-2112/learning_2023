/*Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
#include <stdio.h>
*/


int main(){
    double operand1,operand2;
    char operator;

    printf("Enter Number1 : ");
    scanf("%lf",&operand1);  

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number2: ");
    scanf("%lf",&operand2);

     switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", operand1, operand2, operand1 + operand2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", operand1, operand2, operand1 - operand2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", operand1, operand2, operand1 * operand2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", operand1, operand2, operand1 / operand2);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }
    return 0;



}

