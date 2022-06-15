// Made by Wonkey, 5/10/22 at 9:48 PM (PST)

#include <stdio.h>
#include <string.h>

// please make sure the string system works LMAO.
void main(){

	printf("Hello, my name is Emily Chan! What's yours?\n");

	char userName[100];

	scanf("%s", userName);
	// '%s' is for strings, obviously.

	printf("Hello %s! How is your day?\n", userName);

	char userDay[100];

	scanf("%s", userDay);


	// userDay code below


	// (mufled) "Finally, Jesus!"
	if (!strcmp(userDay, "ok")){
		printf("That's good!\n");
	}

	if (!strcmp(userDay, "good")){
		printf("That's great to hear %s!\n", userName);
		// So, 'else' statements aren't required... :>
	}

	if (!strcmp(userDay, "bad")){
		printf("Oh no, what happened %s? :<\n", userName);
	}


	// userColour code below


	printf("So, what's your favourite colour %s?\n", userName);

	char userColour[100];

	scanf("%s", userColour);

	// crimson
	if (!strcmp(userColour, "cyan")){
		printf("No way, me too!\n");
	}
	else {
		printf("cool!\n");
	}


	// wafles code


	char waffles[100];

	printf("Do you like waffles?\n");

	/* I think there should be two versions of this code.
	One where you can easily exploit and break the app, and another where it's more limiting,
	but it guides you through as if it were a game,
	and one less prone to the "rougher-edged" aproach that this version (and all previous verions) takes. */

	scanf("%s", waffles);

	if (!strcmp(waffles, "yes")){
		printf("Me too!\n");
	} else {
		printf("aww what!\n");
	}

	getchar();
}