#include<stdio.h>
   int main(){


    num1 = float(input(" 25 "));
    num2 = float(input(" 6 "));
    operation = input("(+, -, *, /): ");


    if operation == '+':
        result = num1 + num2;
    if operation == '-':
        result = num1 - num2;
    if operation == '*':
        result = num1 * num2;
    if operation == '/':
      if num2 != 0:
         result = num1 / num2;
    else:
        result = "Error! Division by zero."

    else:
    result = "(+, -, *, /): *";

        print("Result =", result);

return 0;
}
