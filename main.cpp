/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  
*/


/*
Thing 1) University
5 properties:
    1) number of students enrolled
    2) number of buildings on campus
    3) number of dormitory rooms
    4) amount of scholarship money given each semester
    5) amount of graduates with jobs
3 things it can do:
    1) enroll students in courses
    2) provide meals to students
    3) provide study spaces to students
 */

/*
Thing 2) Amusement Park
5 properties:
    1) number of rollercoasters
    2) number of restrooms
    3) number of patrons each week
    4) amount of electricity used each month
    5) number of gift shops
3 things it can do:
    1) optimize line wait times
    2) take photos during rides
    3) sell t-shirts to patrons
 */

/*
Thing 3) Donut Shop
5 properties:
    1) number of donut varieties
    2) number of donuts made each day
    3) number of gallons of oil used each day
    4) number of employees working each day
    5) price of glazed donut
3 things it can do:
    1) sell donuts
    2) customize donut toppings
    3) brew coffee
 */

/*
Thing 4) Bank
5 properties:
    1) amount of money in safe each day
    2) number of tellers each day
    3) amount of interest in a savings account
    4) number of local branches
    5) overdraft free amount
3 things it can do:
    1) lend money
    2) offer credit cards
    3) create retirement plans
 */

/*
Thing 10) Laptop
5 properties:
    1) Trackpad
    2) Keyboard
    3) Battery
    4) Hard drive
    5) RAM
3 things it can do:
    1) Connect to the internet
    2) Play audio
    3) Fold closed
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
