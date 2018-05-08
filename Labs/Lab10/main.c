/********************************************************************************
| PROGRAM: Lab10.c
| DESCRIPTION: Illustrates the creation and use of functions.
********************************************************************************/
/* HEADER FILES---------------------------------------------------------------*/
#include <stdio.h> // Standard I/O - required for printf() function
/* PROGRAM CONSTANTS----------------------------------------------------------*/
#define MULT1_CONSTANT 10
#define MULT2_CONSTANT 20
/* FUNCTION PROTOTYPES--------------------------------------------------------*/
int main(void);
/*###############################################################################
# STEP 1: Write two function prototypes based on the following information:
# + Function Name: multiply_function()
# - Parameters: int x, int y
# - Return type: int
# + Function Name: divide_function()
# - Parameters: float x, float y
# - Return type: float
###############################################################################*/
int multiply_function(int x, int y);
float divide_function(float x, float y);
/*===============================================================================
FUNCTION: main()
DESCRIPTION: Demonstrates for, while and do...while loops
===============================================================================*/
int main(void)
{
/* VARIABLE DECLARATIONS-------------------------------------------------------*/
    int intVariable1 = 0;
    int intVariable2 = 0;
    int product = 0;
    float floatVariable1 = 0;
    float floatVariable2 = 0;
    float quotient = 0;
    int intQuotient = 0;
/* Initialize Variables-----------------------------------------------*/
    intVariable1 = 25;
    intVariable2 = 40;
    floatVariable1 = 17.7869;
    floatVariable2 = 30.12345;
/* Call Functions-----------------------------------------------------*/
/*###############################################################################
# STEP 2: Call the multiply_function() and divide_function().
# (a) Pass the variables intVariable1 and intVariable2 to the
# multiply_function().
# (b) Store the result of multiply_function() in the variable "product".
# (c) Pass the variables floatVariable1 and floatVariable2 to the
# divide_function().
# (d) Store the result of divide_function() in the variable "quotient".
###############################################################################*/
//### Your Code Here ### //### Call multiply_function
//### Your Code Here ### //### Call divide_function
// intQuotient will be 0 since it is an integer
    intQuotient = divide_function( floatVariable1 , floatVariable2 );
    return 0;
}
/*===============================================================================
FUNCTION: multiply_function()
DESCRIPTION: Receives two variables, multiplies them and returns the product.
PARAMETERS: int x, int y
RETURNS: Product of x and y
REQUIREMENTS: none
===============================================================================*/
/*###############################################################################
# STEP 3: Write the function multiply_function(). Use the function prototype
# you wrote in STEP 1 as the function header. In the body, all you
# need to do is return the product of the two input parameters (x * y).
###############################################################################*/
//### Your Code Here ### //### Function Header
//### Your Code Here ### //### Function Body
/*===============================================================================
FUNCTION: divide_function()
DESCRIPTION: Receives two variables, divides them and returns the quotient.
PARAMETERS: int x, int y
RETURNS: Quotient of x and y
REQUIREMENTS: none
===============================================================================*/
/*###############################################################################
# STEP 4: Write the function divide_function(). Use the function prototype
# you wrote in STEP 1 as the function header. In the body, all you
# need to do is return the quotient of the two input parameters (x / y).
###############################################################################*/
//### Your Code Here ### //### Function Header
//### Your Code Here ### //### Function Body