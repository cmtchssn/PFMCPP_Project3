/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
#if false
struct CarWash
{

};
#endif
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


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
Thing 5) Trackpad
5 properties:
    1) left button click (bool)
    2) number of fingers on trackpad
    3) x position
    4) y position
    5) scroll mode (bool)
3 things it can do:
    1) move cursor
    2) highlight text
    3) scroll vertically
 */

/*
Thing 6) Keyboard
5 properties:
    1) language
    2) backlight (bool)
    3) 10-key (bool)
    4) number of letter keys
    5) insert mode (bool)
3 things it can do:
    1) capitalize characters
    2) control display brightness
    3) lock number inputs
 */

/*
Thing 7) Battery
5 properties:
    1) amount of charge percentage
    2) amount of time until full charge
    3) amount of time until recharge
    4) amount of volts
    5) charging current
3 things it can do:
    1) supply laptop power
    2) recharge
    3) use electricity
 */

/*
Thing 8) Hard Drive
5 properties:
    1) total amount of storage space
    2) amount of storage space available
    3) number of partitions
    4) solid-state (bool)
    5) data access speed
3 things it can do:
    1) access data
    2) write data
    3) format data
 */

/*
Thing 9) RAM
5 properties:
    1) access time
    2) power requirement
    3) amount of memory
    4) speed
    5) manufacturer
3 things it can do:
    1) check cache
    2) swap memory between hard drive
    3) temporarily store files
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
