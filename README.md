# cpp_loops (completed)
Exercises for loops in C++

Exercise 1. Write a program that asks the user to input an integer number. Then starting from that number the program prints out in the console next 100 numbers.

Exercise 2. Write a program that prints out in the console all upper case and lower case letters from the alphabet (A-Z).

Exercise 3. Write a program that asks the user to input any number (integer or floating point) and the n-th power (integer) the number should be raised to. Then calculate the result of the exponentiation of this number to the said power.

Exercise 4. Write a program that asks the user to input any integer number n. Then calculate the result of the factorial operation (n! - 1*2*3*...*n). Print in the console result of the n factorial as well as the factorial of numbers before n.

Exercise 5. Write a program that asks the user to input an integer number. Then the program should print out in the console the inputted number of asterisks (*). Furthermore, it should break the line (endl) every 5 asterisks printed.

Exercise 6. Write a program that asks the user to input 5 integer numbers (store them in a 5 element array). Then it checks if the inputted numbers were odd or even and prints that information out in the console.

Exercise 7. Write a program that asks the user to input a PIN code for the first time. Then using the while (or do while) loop ask the user to input the PIN code again. If the PIN code is wrong, the user should input it again (until the number is correct).

Exercise 8. Modify exercise 7 in order to stop the program if the PIN code was entered wrongly 5 times. The user should be informed how many tries are left.

Exercise 9. Write a program that prints out in the console a simple representation of 3x3 plane. The plane should be filled with numbers from 1 to 9 (stored in 3x3 array representing x,y coordinates of the plane).
```
    1     2     3



    4     5     6



    7     8     9
```
Exercise 10. Modify the program from exercise 9 so that the user can now place an 'X' sign on desired cell of the plane. After printing out the 1 to 9 on the plane, the user is asked to input x and y coordinate to put 'X'. The plane is printed again with the modified value on the inputted coordinates. Using system("cls") clear the screen so there is only one plane printed in the console. The program should work in an infinite loop so the user can fill whole plane with 'X'-s.

Exercise 11. Working on the program from the exercises 9 and 10 modify the code in order to let the user place 'X' and 'O' signs (like in tick-tack-toe game). The signs should be placed in turns (alternately, once X, once O to simulate two players playing).

Exercise 12. Modify the program from the last three exercises in order to prevent situations where:
             - values of x or y coordinates aren't in the interval <1;3>
             - the inputted cell already has a 'X' or 'O' sign on it

Exercise 13. Write a program that asks the user to input an integer number. Then the program calculates the sum of all even numbers up to the number that the user inputted. Use continue instruction to leave all odd numbers.

Exercise 14. Write a program that shows the user current sum of numbers (starting with 0). Then it asks if the user wants to add next number (raising by 1 in an infinite loop). If the user inputs Y or y it adds the said number. If the user inputs N or n the number is skipped and gets incremented by 1 (continue). If the user inputs anything else then Y/y or N/n the loop closes (break).
