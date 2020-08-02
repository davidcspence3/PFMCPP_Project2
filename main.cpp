#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 
 
int
float 
bool
double
char 
unsigned int
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int x = 5;
    int y = 4;
    int z = 3;
    float num = 2.0f;
    float whiz = 1.5f;
    float avg = 95.0f;
    bool result = true;
    bool isOn = false;
    bool light = true;
    double take = 5.8;
    double mass = 6.5;
    double gravity = 9.8;
    char a = 'a';
    char b = 'b';
    char c = 'c';
    unsigned int size = 235;
    unsigned int length = 16;
    unsigned int width = 12;


    ignoreUnused(number, x, y, z, num, whiz, avg, result, isOn, light, take, mass, gravity, a, b, c, size, length, width); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float calculateProfit(float revenue, float expense)
{
    ignoreUnused(revenue, expense);
    return{};
}
/*
 2)
 */
void rotate(int degree)
{
    ignoreUnused(degree);
}
/*
 3)
 */
int totalCustomers(int entered, int exited)
{
    ignoreUnused(entered, exited);
    return{};
}
/*
 4)
 */
void open()
{
}
/*
 5)
 */
bool hasGas(int milesDriven, int tankCapacity = 10)
{
    ignoreUnused(milesDriven, tankCapacity);
    return{};
}
/*
 6)
 */
void jump(int direction = 90, int length = 5)
{
    ignoreUnused(direction, length);
}
/*
 7)
 */
float totalChange(float initial = 0.0f, float last = 100.0f)
{
    ignoreUnused(initial, last);
    return{};
}
/*
 8)
 */
bool finalDecision(int numReasons, int value, int excuses = 0)
{
    ignoreUnused(numReasons, value, excuses);
    return{};
}
/*
 9)
 */
float volumeOfWater(float rain, float area, float time)
{
    ignoreUnused(rain, area, time);
    return{};
}
/*
 10)
 */
void finish()
{
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto profit = calculateProfit(100.0f, 75.6f);
    //2)
    rotate(90);
    //3)
    auto customers = totalCustomers(150, 10);
    //4)
    open();
    //5)
    auto stillRunning = hasGas(100, 8);
    //6)
    jump(45, 100);
    //7)
    auto delta = totalChange();
    //8)
    auto choice = finalDecision(5, 100, 3);
    //9)
    auto poolLevel = volumeOfWater(8.2f, 10.1f, 180.0f);
    //10)
    finish();
    
    ignoreUnused(carRented, profit, customers, stillRunning, delta, choice, poolLevel);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
