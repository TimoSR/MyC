/**
 *
The purpose of this lab is to illustrate the use of the switch statement to make decisions in code. A switch statement
will execute one (or more) blocks of code depending on which condition is met. The goal of this lab is for
you to become comfortable with the switch statement syntax and how you create the condition expressions.

 */

#include <stdio.h> // Standard I/O - required for printf() function
/* PROGRAM CONSTANTS----------------------------------------------------------*/
#define CBS 2
#define NBC 5
#define ABC 7
/* VARIABLE DECLARATIONS-------------------------------------------------------*/
int channel = 1;
/* FUNCTION PROTOTYPES--------------------------------------------------------*/
int main(void);
/*===============================================================================
 FUNCTION: main()
 DESCRIPTION: Prints TV channels from 2 to 10 with their network affiliation
===============================================================================*/
int main(void)
{
    /* Main Program Loop--------------------------------------------------*/
    while(channel < 10)
    {
        channel++; //Increment channel

/*###########################################################################
# TASK: Write a switch statement to print the network's initials with the
# channel.
# * If channel = 2, print "CBS 2" to the output window.
# * If channel = 5, print "NBC 5" to the output window.
# * If channel = 7, print "ABC 7" to the output window.
# * For all other channels, print "--- #" to the output window,
# where "#" is the channel number.
# (HINT: Use printf(), and use the newline character '\n' at the end
# of each string you print to the output window.)
# NOTE: The switch statement is in a loop that will execute 9 times. Each
# pass through the loop, 'channel' will be incremented. The output
# window should display a line of text for channels 2 to 10.
#
# STEP 1: Open a switch statement on the variable 'channel'
###########################################################################*/

        //### Your Code Here ### //### Begin switch statement
        {
            /*###########################################################################
            # STEP 2: Write case for channel = CBS (CBS is a constant defined to equal 2)
            ###########################################################################*/

            //### Your Code Here ### //### If channel = CBS (CBS = 2)
            {
                //### Your Code Here ### //### Display string "CBS 2" followed by newline
                //### Your Code Here ### //### Prevent fall through to next case
            }
            /*###########################################################################
            # STEP 3: Write case for channel = NBC (NBC is a constant defined to equal 5)
            # This should look almost identical to step 2.
            ###########################################################################*/
//### Your Code Here ### //### If channel = NBC (NBC = 5)
            {
                //### Your Code Here ### //### Display string "NBC 5" followed by newline
                //### Your Code Here ### //### Prevent fall through to next case
            }
            /*###########################################################################
            # STEP 4: Write case for channel = ABC (ABC is a constant defined to equal 7)
            # This should look almost identical to step 2.
            ###########################################################################*/

            //### Your Code Here ### //### If channel = ABC (ABC = 7)
            {
                //### Your Code Here ### //### Display string "ABC 7" followed by newline
                //### Your Code Here ### //### Prevent fall through to next case
            }
            /*###########################################################################
            # STEP 5: Write default case. If channel is anything other than those
            # listed above, this is what should be done. For these cases, you
            # need to print the string "--- #" where "#" is the channel number.
            # For example, if channel = 6, you should print "--- 6".
            ###########################################################################*/
//### Your Code Here ### //### For all other channels
            {
                //### Your Code Here ### //### Display string "--- #" followed by newline
            }
        }
    }
    while(1);
}