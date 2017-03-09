/**
 * @brief This program is a typing tester with 3 differnt game modes
 */
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
#include<graphics>

using namespace std;

void simple();

void alphabets();

void sentence();
/**
 * @brief Main function that displays the menu options and user enters what mode they want to play
 */
void main() {
    clrscr();                                   //function from the "conio.h" library that clears the console
    int c;                                      //int c used for the selection in the menu
    menu:
    clrscr();                                   //function from the "conio.h" library that clears the console
    cout << "\n\n\t\t\t Made By Chirag Jain";                //menu options being displayed
    cout << "\n\n\t\t\t   =====TYPING TESTER =====";
    cout << "\n\n\n\t\t  ::MAIN MENU::";
    cout << "\n\n\t\t1.Learn Simple Things";
    cout << "\n\n\t\t2.Type Alphabets";
    cout << "\n\n\t\t3.Type the sentence";
    cout << "\n\n\t\t0.Exit";
    cout << "\n\n\n\t\tEnter your choice : ";
    cin >> c;                                                //enter int value for option
    switch (c) {                                             //switch that takes user input and makes a decision
        case 1:
            simple();                                        // simple game mode invoked
            goto menu;                                       // go back to main menu

        case 2:
            alphabets();                                    // alphabet game mode invoked
            goto menu;                                      // go back to main menu

        case 3:
            sentence();                                     //sentence game mode invoked
            goto menu;                                      // go back to main menu

        case 0:
            exit(0);                                        //exit mode selected
            break;                                          //end the program
        default:                                            //else
            goto menu;                                      // go back to main menu

    }
}
/**
 * @brief This function plays the simple game mode which is when the user enters the amount of time they want to repeat the typing test and the program goes through each indivdual row on the keybaord and ask the user for one key at a time
 * @
 */
void simple() {
    clrscr();                                                       //clear console
    int rep;                                                        //enter the amount of times typing test will be repeated
    char choice1, choice2;                                          //char choice that the user makes
    char key;                                                       //char key that is used as a temp variable to check if user entered the correct value
    char mid[] = "akdfss: ";                                        //char array for the middle row of the keyboard
    lkjhj                                                           //error in the code
    ";
    char top[] = "qruot[]ptouyu";                                   //char array for the top row of the keyboard
    char bot[] = "zxcvnv /.,mnm";                                   //char array for the bottom row of the keyboard
    cout << "\n\nHello Friend! Here you can learn to type Fast.";
    delay(1000);                                                    //delay program by 1000 ms
    cout << "This Application is developed by Chirag Jain";
    delay(2000);                                                    //delay program by 2000 ms
    cout << "\n\nAnd now we are going to Start......";
    delay(1000);                                                    //delay program by 1000 ms
    cout << "\n\nLet us start.Are you ready ?(y/n)";
    cin >> choice1;                                                 //user enters "y" to start and "n" to quit
    if (choice1 == 'y' || choice1 == 'Y') {
        clrscr();                                                   //cleats console
        cout << "\n\nOK, it is very simple to do this....";
        delay(1000);                                                //delay program by 1000 ms
        cout << "\n\nFollow.......";
        delay(1000);                                                //delay program by 1000 ms
        cout << "\n\nPress any key to start.";
        getch();
        cout << "\n\nLet us study the simple topics....";
        delay(1000);                                                //delay program by 1000 ms
        cout << "\n\nLet us start with Middle Row.....";
        cout << "\n\nHow many times do you want to practice : ";
        cin >> rep;
        cout << "\n\nType what you see on the screen...";
        for (int i = 0; i < rep; ++i) {                             //for loop runs as many times as the user entered
            for (int j = 0; j < 13; ++j) {                          //runs for one row
                cout << "\n\nEnter this:" << mid[j];                //asks user to enter input from the middle row of the keyboard incrementing keyboard index
                cout << "\tYou entered:";
                key = getche();                                     //gets the input from the user
                if (key == mid[j]) {                                //if the key is correct
                    cout << "\tCorrect..";
                    sound(300);                                     //Makes beep noise for 300 ms
                    delay(200);                                     //delay program by 200 ms
                    nosound();                                      //no sound is made
                } else {
                    cout << "\tWrong";                              //if the entered key is incorrect
                    sound(600);                                     //Makes beep noise for 600 ms
                    delay(95);                                      //delay program by 95 ms
                    nosound();                                      //Makes no noise
                    sound(700);                                     //Makes beep noise for 700 ms
                    delay(100);                                     //delay program by 100 ms
                    nosound();                                      //Makes nno noise
                }
            }
        }
//Top row same p
        cout << "\n\nLet us study the top row.....";
        cout << "\n\nHow many times do you want to practice : ";
        cin >> rep;

        cout << "\n\nType what you see on the screen...";
        for (i = 0; i < rep; ++i) {                               //for loop runs as many times as the user entered
            for (int j = 0; j < 13; ++j) {                        //runs for one row
                cout << "\n\nEnter this:" << top[j];
                cout << "\tYou entered:";                         //asks user to enter input from the top row of the keyboard incrementing keyboard index
                key = getche();
                if (key == top[j]) {                              //if the key is correct
                    cout << "\tCorrect..";
                    sound(300);                                   //Makes beep noise for 300 ms
                    delay(200);                                   //delay program by 200 ms
                    nosound();                                    //no sound is made
                } else {
                    cout << "\tWrong";                            //if the entered key is incorrect
                    sound(600);                                   //Makes beep noise for 600 ms
                    delay(95);                                    //delay program by 95 ms
                    nosound();                                    //Makes no noise
                    sound(700);                                   //Makes beep noise for 700 ms
                    delay(100);                                   //delay program by 100 ms
                    nosound();                                    //Makes nno noise
                }
            }
        }
//Bottom Row
        cout << "\n\nFirst you have to learn the bottom row.....";
        cout << "\n\nHow many times do you want to practice : ";
        cin >> rep;
        /*   cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
           cin>>choice2;
           if(choice2=='y'||choice2=='Y')
           {
           ************************************
           cout<<"\n\nUnder development..........";
           getch();
           } */
        cout << "\n\nType what you see on the screen...";
        for (i = 0; i < rep; ++i) {                                 //for loop runs as many times as the user entered
            for (int j = 0; j < 13; ++j) {                           //runs for one row
                cout << "\n\nEnter this:" << bot[j];
                cout << "\tYou entered:";                           //asks user to enter input from the bottom row of the keyboard incrementing keyboard index
                key = getche();
                if (key == bot[j]) {                                          //if the key is correct
                    cout << "\tCorrect..";
                    sound(300);                                                //Makes beep noise for 300 ms
                    delay(200);                                                //delay program by 200 ms
                    nosound();                                                 //no sound is made
                } else {
                    cout << "\tWrong";                                          //if the entered key is incorrect
                    sound(600);                                                 //Makes beep noise for 600 ms
                    delay(95);                                                //delay program by 95 ms
                    nosound();                                                 //Makes no noise
                    sound(700);                                                 //Makes beep noise for 700 ms
                    delay(100);                                                //delay program by 100 ms
                    nosound();                                                 //Makes nno noise
                }
            }
        }
    }  //wanna learn
    else {                                                              //user enters "n"
        cout << "\n\nOK! If you wanna go then no problem.......";
        delay(3000);                                                //delay program by 3000 ms
    }
}
/**
 * @brief This game mode asks the user to enter the alpahabet in random order
 */
void alphabets() {
    randomize();                                    //randomize function
    char choice;                                    //char choice needed to store the user result
    int num;                                        //integer num stores the ASCii value for letter to be entered by the user
    int score = 0, randnum;                         //score increments everytime the user gets a correct answer
    char letter, key;                               //temp variables used to determine whether or not input is correct
    clrscr();                                       //clear console
    cout << "In this test you will have to type the alphabets you see on the screen.";
    delay(1000);                                                //delay program by 1000 ms
    cout << "\n\nDo you want me to help?(y/n)";                 //user enters choice
    choice = getche();
    if (choice == 'y' || choice == 'Y') {
        cout << "\n\n1.You have to type the random alphabets you see on the screen.";
        delay(2000);                                                //delay program by 2000 ms
        cout << "\n\n2.If your answer is correct you can hear this beep.";
        while (!kbhit()) {
            sound(600);                                                 //Makes beep noise for 600 ms
            delay(95);                                                //delay program by 95 ms
            nosound();                                                 //Makes no noise
        }
        getch();
        cout << "\n\n3.If your answer is wrong you will hear this";
        while (!kbhit()) {
            sound(600);                                                 //Makes beep noise for 600 ms
            delay(95);                                                //delay program by 95 ms
            nosound();                                                 //Makes no noise
            sound(700);                                                 //Makes beep noise for 700 ms
            delay(100);                                                //delay program by 100 ms
            nosound();                                                 //Makes nno noise
        }
    }
    cout << "\n\nPress any key when you are ready.";                    //user enters any key to start
    getch();                                                            //gets user input
    int number;                                                         //int for holding the max score
    cout << "\n\nWhat should be the max score:";
    cin >> number;                                                      //user enters a max score
    for (int i = 0; i < number; i++) {                                  //
        clrscr();                                                       //clear the console
        randnum = random(25);                                           //
        for (int j = 0; j < randnum; j++)                               //
            cout << "\n";
        randnum = random(25);                                           //random number from 0-25 because only 26 letters
        for (j = 0; j < randnum; j++)
            cout << "\t";

        num = 65 + random(25);                                         //convert num into ASCii value to get letter
        letter = (char) num;
        cout << letter;
        key = getch();                                                  //get user input
        if (key == letter) {
            sound(600);                                                 //Makes beep noise for 600 ms
            delay(95);                                                //delay program by 95 ms
            nosound();                                                 //Makes no noise
            score++;                                                   // add one to the score
        } else {
            sound(600);                                                 //Makes beep noise for 600 ms
            delay(95);                                                //delay program by 95 ms
            nosound();                                                 //Makes no noise
            sound(700);                                                 //Makes beep noise for 700 ms
            delay(100);                                                //delay program by 100 ms
            nosound();                                                 //Makes nno noise
        }
    }
    cout << "\n\n\nYour total score is " << score;                      //prints total score
    getch();
}
/**
 * @brief This mode requires the user to enter a sentence
 */
void sentence() {
    clrscr();                                                   //clear the console
    time_t t1, t2;                                              //time variable t1 and t2
    char line[300];                                             //sentence length is 300 characters
    cout << "This will test your speed\n";
    delay(1000);                                                //delay program by 1000 ms
    type:
    cout << "\nJust type the sentence given.\n";
    delay(1000);                                                //delay program by 1000 ms
    cout << "\n\nPress any key to start.";
    getch();                                                      //gets user input
    clrscr();                                                   //cleats console
    t1 = time(NULL);                                            //sets current value of t1
    cout << "I am learning to type.This is my first typing lesson.";
    cout << "\n\nEnter the sentence:";
    gets(line);                                                 //gets user input
    t2 = time(NULL);                                            //gets current value of t2
    if (!strcmp(line,
                "I am learning to type.This is my first typing lesson.After this I will become maestro in Typing World. hahaha")) {             //if the entered sentence is correct
        cout << "\n\nYou typed the sentence in " << t2 - t1 << " seconds.";             //total time is t2 minus t1
        getch();
    } else {
        cout << "\n\nThe sentence you typed was wrong..";       //if the sentence is incorrect go back to typing  it
        getch();
        goto type;
    }
}
