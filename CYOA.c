#include <stdio.h>
#include <stdlib.h>


void dungeonDoor();
void stairCase();
void upStairs();

void dead();
void sleep();


void start()
{

int choice = 0;

	printf("You wake up in a cold, dark room\nWhat will you do?\n");
	printf("1)  Feel around on the floor\n2)  Go to sleep\n3)  YELL LOUDLY\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		dungeonDoor();
	}else if(choice == 2)
	{
		sleep();

	}else
	{
		printf("Loud noises do not open doors or defeat monsters....\n");
		dead();
	}
}

void dead()
{
	printf("\n\n            You have died.\n\n");
}

void sleep()
{

		printf("In disbelief of the situation occuring, you decide rest is the best option.\n");
		printf("A creature curls up next to you to take a nap before his next meal.");
		dead();
}


void dungeonDoor()
{

	int choice = 0;

	printf("You feel around on the wet floor with your finger tips... you feel something slimey, ");
	printf("you panic and jolt away. You back right into a wooden door.\n");
	printf("What will you do?\n");
	printf("1)  Open the door\n2)  Charge into the darkness\n3)  Go to sleep\n");
	scanf("%d", &choice);

	if(choice == 1)
	{
		stairCase();
	}else if(choice == 2)
	{
		printf("You boldly jump at the creature, but the fight is futile. It throws you aside and you lose consciousness and tenticles whip around.\n");
	
		dead();
	}else if(choice == 3)
	{
		sleep();
	}else{
		dead();
	}

}

void stairCase()
{
	int choice;

	printf("Just as you open the door and run up a poorly lit staircase you hear a slither knock\n");
	printf(" the wooden door open. Too dark to see what is causing this, you jump back and try to\n");
	printf("shut the door on the slithering tenticle that is frantically whipping around the staircase.\n");
	printf("You cry out as your face and back are whipped by the cold and wet tenticle.\n");
	printf("What do you do?\n1)  Slam the door harder on the tenticle\n2)  Run up the stairs as fast as you can\n3)  Bite the tenticle\n");

	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("Just as the door is about to open, you slam it as hard as humanly possible. A harsh shriek pierces through the staircase.\n");
		printf("While running up the stairs the broken tenticle tries to grab your leg.\n");
		upStairs();

	}
	
	if(choice == 2)
	{
		upStairs();
	}

}

void upStairs()
{
	int choice = 0;

	printf("When you reach the upstairs, you come across a lavish room with baroque furniture, ");
	printf("red wallpapered interior, and classical music playing on a old phonograph.\n");
	printf("The fireplace smolders but the room is without life.");
	printf("What should you do?\n1)  Jump out of the window\n2)  Look around\n3)  Go back downstairs\n");

	scanf("%d", &choice);

	if(choice == 1)
	{
		printf("Desperately you brace yourself as you gain speed. The windows have curtains covering.\n");
		printf("Sadly, instead of breaking through the window, you smash against glass with a brick wall behind it.\n");
		printf("Dizzily you realize that all of the windows must be bricked off, and you fade to black.\n");
		start();
	}else if(choice == 2)
	{

	}else if(choice == 3)
	{
		printf("Just as you reopen the basement door, the whiplike tenticles engulf you and pull you into the darkness.\n");

		dead();

	}



}

int main()
{
	
	start();

}