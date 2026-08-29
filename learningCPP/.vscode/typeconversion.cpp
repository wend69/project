#include <iostream>



int main(){
    /*code right below this line, original number 3.14 with decimal being converted to
    whole number as 3 because (int) is in there which basically removed 0.14,
     and as whole 3 number is 
    assigned to double variable nums, and then printed out as 3.0 because
     it is a double data type.{3.14 > (int) 3.14 > 3 > double nums = 3 > printed out as 3.0}
    */ 
    double nums = (int) 3.14; //implicit type conversion, also known as type casting, is the process of converting a value from one data type to another without the need for explicit syntax. In this case, the double value 3.14 is being implicitly converted to an int, which results in the value 3. This is because the fractional part of the number is truncated when converting from a floating-point type to an integer type. The resulting integer value is then assigned to the double variable nums, which will store it as 3.0 when printed out.
    std::cout << nums << std::endl;
    std::cout << (char) 100 << (char) 100 << '\n'; //explicit type conversion, also known as type casting, is the process of converting a value from one data type to another using explicit syntax. In this case, the integer value 100 is being explicitly converted to a char using the (char) syntax. The resulting char value will be the ASCII character corresponding to the integer value 100, which is 'd'. The second (char) 100 will also be converted to 'd', so the output of this line will be "dd".
    int num = 10;
    int num2 = 6;
    std::cout << num2 / (double) num * 100 << std::endl; //implicit type conversion, also known as type casting, is the process of converting a value from one data type to another without the need for explicit syntax. In this case, the integer value num2 is being implicitly converted to a double when it is divided by the integer value num. This is because the division operator (/) performs floating-point division when at least one of the operands is a floating-point type. The resulting double value is then multiplied by 100, which will also be implicitly converted to a double. The final result will be a double value that represents the percentage of num2 with respect to num, which will be printed out as a whole number.
    return 0;
}


