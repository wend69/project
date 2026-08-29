#Hello this is my first every project that I made. I will be using the most basic codes that I know so far.
result = None

print("Please pick a number in line, as example 10, 2 and write which operator u like to use!")

operator = (input('Which operation would you like to use? (+ - * :): '))
number1 = float(input('Please pick a appropriate number'))
number2 = float(input('Please pick a appropriate number'))

if operator == "+":
       result = number1 + number2
  
elif operator == "-":
       result = number1 - number2
      
elif operator == "*":
       result = number1 * number2
      
elif operator == ':':
     if number2 == 0:
         print("Error")
         result = None
     else:
       result = number1 / number2
      
else:
       print(f"{operator} is invalid operator!")
if result is not None:
    print(f"The result of {number1} {operator} {number2} is: {result}")








