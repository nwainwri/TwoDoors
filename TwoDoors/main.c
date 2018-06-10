//
//  main.c
//  TwoDoors
//
//  Created by Nathan Wainwright on 2018-06-10.
//  Copyright © 2018 Nathan Wainwright. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    
    char play = '\0';
    char choice = 0;
    char *answer = NULL; // initing answer string
    
    do {
    
        printf("Welcome to Two doors.\n");
        // on initial run it will print this out... on replay's it won't
        if (play != 'y') {
            printf("Would you like to play? (y/n): ");
            scanf("%s", &play); // was %d should be %s
        }
        if (play == 'y') { // had = not ==
            
            // changed "print" to "printf" and "scan" to "scanf"
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            scanf("%d", &choice); // changed "choice" to "&choice" to handle input properly.

            answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
            
            switch (choice)
            {
                case 1: printf("%s", answer); break; // took out "c", portion, changed to "%s" to handle string properly
                case 2: printf("%s", answer); break; // took out "c", portion, changed to "%s" to handle string properly
                case 3: printf("%s", answer); break; // took out "c", portion, changed to "%s" to handle string properly
                default: break;
            }
        } // closes out the if play == y statement.
    
        printf("Do you want to play again? ");
        scanf("%s", &play);
    } while (play == 'y'); // closes ou the do {...} statement
    
    return (0); // changed this from return 1; to return (0);
}

