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
void main()
{
clrscr();
int c;
menu:
clrscr();
cout<<"\n\n\t\t\t Made By Chirag Jain
cout<<"\n\n\t\t\t   =====TYPING TESTER =====";
cout<<"\n\n\n\t\t  ::MAIN MENU::";
cout<<"\n\n\t\t1.Learn Simple Things";
cout<<"\n\n\t\t2.Type Alphabets";
cout<<"\n\n\t\t3.Type the sentence";
cout<<"\n\n\t\t0.Exit";
cout<<"\n\n\n\t\tEnter your choice : ";
cin>>c;
switch(c)
{
case 1: simple();
    goto menu;

case 2: alphabets();
    goto menu;

case 3: sentence();
    goto menu;

case 0: exit(0);
    break;
default: goto menu;

}
}
void simple()
{
clrscr();
int rep;
char choice1,choice2;
char key;
char mid[]="akdfss: ";lkjhj";
char top[]="qruot[]ptouyu";
char bot[]="zxcvnv /.,mnm";
cout<<"\n\nHello Friend! Here you can learn to type Fast.";
delay(1000);
cout<<"This Application is developed by Chirag Jain";
delay(2000);
cout<<"\n\nAnd now we are going to Start......";
delay(1000);
cout<<"\n\nLet us start.Are you ready ?(y/n)";
cin>>choice1;
if(choice1=='y'||choice1=='Y')
{
    clrscr();
    cout<<"\n\nOK, it is very simple to do this....";
    delay(1000);
    cout<<"\n\nFollow.......";
    delay(1000);
    cout<<"\n\nPress any key to start.";
    getch();
    cout<<"\n\nLet us study the simple topics....";
    delay(1000);
    cout<<"\n\nLet us start with Middle Row.....";
    cout<<"\n\nHow many times do you want to practice : ";
    cin>>rep;
    cout<<"\n\nType what you see on the screen...";
    for(int i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    cout<<"\n\nEnter this:"<<mid[j];
	    cout<<"\tYou entered:";
	    key=getche();
	    if(key==mid[j])
	    {
		cout<<"\tCorrect..";
		sound(300);
		delay(200);
		nosound();
	    }
	    else
	    {
		cout<<"\tWrong";
		sound(600);
		delay(95);
		nosound();
		sound(700);
		delay(100);
		nosound();
	    }
	}
    }
//Top row
    cout<<"\n\nLet us study the top row.....";
    cout<<"\n\nHow many times do you want to practice : ";
    cin>>rep;

    cout<<"\n\nType what you see on the screen...";
    for(i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    cout<<"\n\nEnter this:"<<top[j];
	    cout<<"\tYou entered:";
	    key=getche();
	    if(key==top[j])
	    {
		cout<<"\tCorrect..";
		sound(400);
		delay(180);
		nosound();
	    }
	    else
	    {
		cout<<"\tWrong";
		sound(600);
		delay(95);
		nosound();
		sound(800);
		delay(110);
		nosound();
	    }
	}
    }
//Bottom Row
    cout<<"\n\nFirst you have to learn the bottom row.....";
    cout<<"\n\nHow many times do you want to practice : ";
    cin>>rep;
 /*   cout<<"\n\nDo you want to see the finger positioning ?(y/n)";
    cin>>choice2;
    if(choice2=='y'||choice2=='Y')
    {
	************************************
	cout<<"\n\nUnder development..........";
	getch();
    } */
    cout<<"\n\nType what you see on the screen...";
    for(i=0;i<rep;++i)
    {
	for(int j=0;j<13;++j)
	{
	    cout<<"\n\nEnter this:"<<bot[j];
	    cout<<"\tYou entered:";
	    key=getche();
	    if(key==bot[j])
	    {
		cout<<"\tCorrect..";
		sound(300);
		delay(200);
		nosound();
	    }
	    else
	    {
		cout<<"\tWrong";
		sound(600);
		delay(100);
		nosound();
		sound(700);
		delay(100);
		nosound();
	    }
	}
    }
}  //wanna learn
else
{
cout<<"\n\nOK! If you wanna go then no problem.......";
delay(3000);
}
}
void alphabets()
{
randomize();
char choice;
int num;
int score=0,randnum;
char letter,key;
clrscr();
cout<<"In this test you will have to type the alphabets you see on the screen.";
delay(1000);
cout<<"\n\nDo you want me to help?(y/n)";
choice=getche();
if(choice=='y'||choice=='Y')
{
cout<<"\n\n1.You have to type the random alphabets you see on the screen.";
delay(2000);
cout<<"\n\n2.If your answer is correct you can hear this beep.";
while(!kbhit())
{
sound(300);
delay(200);
nosound();
}
getch();
cout<<"\n\n3.If your answer is wrong you will hear this";
while(!kbhit())
{
sound(600);
delay(100);
nosound();
sound(700);
delay(100);
nosound();
}
}
cout<<"\n\nPress any key when you are ready.";
getch();
int number;
cout<<"\n\nWhat should be the max score:";
cin>>number;
for(int i=0;i<number;i++)
{
clrscr();
randnum=random(25);
for(int j=0;j<randnum;j++)
cout<<"\n";
randnum=random(25);
for(j=0;j<randnum;j++)
cout<<"\t";

num=65+random(25);
letter=(char)num;
cout<<letter;
key=getch();
if(key==letter)
{
sound(300);
delay(200);
nosound();
score++;
}
else
{
sound(600);
delay(200);
nosound();
sound(700);
delay(200);
nosound();
}
}
cout<<"\n\n\nYour total score is "<<score;
getch();
}
void sentence()
{
clrscr();
time_t t1,t2;
char line[300];
cout<<"This will test your speed\n";
delay(1000);
type:
cout<<"\nJust type the sentence given.\n";
delay(1000);
cout<<"\n\nPress any key to start.";
getch();
clrscr();
t1 = time(NULL);
cout<<"I am learning to type.This is my first typing lesson.";
cout<<"\n\nEnter the sentence:";
gets(line);
t2 = time(NULL);
if(!strcmp(line,"I am learning to type.This is my first typing lesson.After this I will become maestro in Typing World. hahaha"))
{
cout<<"\n\nYou typed the sentence in "<<t2-t1<<" seconds.";
getch();
}
else
{
cout<<"\n\nThe sentence you typed was wrong..";
getch();
goto type;
}
}
