#Hello this is my first every project that I made. I will be using the most basic codes that I know so far.

print("Please pick a number in line, as example 10, 2 and write which operator u like to use!")

operator = (input('Which operation would you like to use? (+ - * :): '))
number1 = int(input('Please pick a appropriate number'))
number2 = int(input('Please pick a appropriate number'))

if operator == "+":
       result = number1 + number2
       print(result)
elif operator == "-":
       result = number1 - number2
       print(result)
elif operator == "*":
       result = number1 * number2
       print(result)
elif operator == ':':
       result = number1 / number2
       print(result)
else:
       print(f"{operator} is invalid operator!")









