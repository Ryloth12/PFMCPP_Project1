#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

 write out 10 nouns.
 for each of the 10 nouns, write out 3 actions it might perform, in plain english.
 write out how you'd call that action in pseudo code, in the space between each block comment
 
 If the action requires multiple words, use camelCaseToNameIt
 don't forget the semi-colon after each statement
 
 When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example)
 Noun:       arm
 action 1:   the arm extends
 action 2:   the arm flexes
 action 3:   the arm rotates conter-clockwise
 */
arm.extend();
arm.flex();
arm.rotateCounterClockwise(); //demonstrates CamelCase

/*
 1)
 Noun: cat 
 action 1: walk
 action 2: eat
 action 3: curls up in lap
 */
cat.walk();
cat.eat();
cat.curlsUpInLap();


/*
 2)
 Noun: plane
 action 1: rotates in lateral plane
 action 2: rotates in frontal plane
 action 3: rotates in vertical plane
 */

 plane.rotateLateralPlane();
 plane.rotateFrontalPlane();
 plane.rotateVerticalPlane();

/*
 3)
 Noun: person
 action 1: shows some emotion
 action 2: thinks about stuff
 action 3: talks to student
 */

 person.showsSomeEmotion();
 person.thinksAboutStuff();
 person.talksToStudent();


/*
 4)
 Noun: car
 action 1: accelerates
 action 2: decelerates
 action 3: switches gear
 */
car.accelerates();
car.decelerates();
car.switchesGear();
/*
 5)
 Noun: water
 action 1: flow
 action 2: freeze
 action 3: boil
 */
water.flow();
water.freeze();
water.boil();


/*
 6)
 Noun: basketball player
 action 1: performs alley hoop
 action 2: shoots three pointer
 action 3: passes the ball
 */
BasketballPlayer.performsAlleyHoop();
BasketballPlayer.shootsThreePointer();
BasketballPlayer.passesTheBall();
/*
 7)
 Noun: doctor
 action 1: diagnoses patient
 action 2: gives prescription
 action 3: talks to nurse
 */
doctor.diagnosesPatient();
doctor.givesPrescription();
doctor.talksToNurse();


/*
 8)
 Noun: snake
 action 1: balls itself up
 action 2: sheds skin
 action 3: preys on rodent
 */
snake.ballsItselfUp();
snake.shedsSkin();
snake.preysOnRodent();

/*
 9)
 Noun: ghost
 action 1: scares guests
 action 2: haunts house
 action 3: destroys powergrid
 */
ghost.scaresGuests();
ghost.hauntsHouse();
ghost.destroysPowergrid();


/*
 10)
 Noun: policeman
 action 1: arrests criminal
 action 2: does paperwork
 action 3: eats donut
 */
 policeman.arrestsCriminal();
 policeman.doesPaperwork();
 policeman.eatsDonut();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
