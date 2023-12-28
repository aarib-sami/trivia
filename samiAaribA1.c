#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

/**********************************samiAaribA1.c******************************************* 

Student Name: Aarib Sami 
Email Id: asami01
Due Date: October 6th, 2023
Course Name: CIS*1300

I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic integrity.
2) I have completed the Computing with Integrity Tutorial on Moodle; and
3) I have achieved at least 80% in the Computing with Integrity Self Test.

I assert that this work is my own. I have appropriately acknowledged any and all
material that I have used, whether directly quoted or paraphrased. Furthermore,
I certify that this assignment was prepared by me specifically for this course.

*****************************************************************************************/
/***************************************************************************************** 

Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall
compiling:
gcc -std=c99 -Wall samiAaribA1.c
Running: ./a.out

OR
gcc -std=c99 -Wall chaturvediRituA1.c -o assn1
Running the Program: ./assn1
*****************************************************************************************/



int main ()
{
    int birthYear;
    int luckyNumber = 0;
    int currentYearDigit;
    int playerCash = 0;
    int randomGen;

    int qOneAward = 100;
    int qTwoAward = 500;
    int qThreeAward = 1000;
    int qFourAward = 5000;
    int qFiveAward = 10000;
    int qSixAward = 50000;
    int qSevenAward = 100000;

    char answer;

    bool correctAnswerFormat = false;
    bool lifelineOpen = true;
    bool usingLifeline = false;


    // Entering the year of birth of the player 
    while (correctAnswerFormat == false)
    {
        printf("Enter your birth Year (yyyy): ");
        scanf("%d", &birthYear);

        float characterCheck = (float) birthYear/1000;
        if ((characterCheck >= 10) | (characterCheck < 1))
        {
            printf("Please enter a valid year.\n");
        }
        else
        {
            correctAnswerFormat = true;
        }
    }

    printf("\n");
    
    // Calculating the lucky number of the player

    while (birthYear > 0)
    {
        currentYearDigit = birthYear % 10;
        luckyNumber += currentYearDigit;
        birthYear = birthYear / 10;
    }
     
    printf("*************************\n");  
    printf("Welcome to Mixed Treasures\n");  
    printf("Your lucky number is: %d!\n", luckyNumber);  
    printf("*************************\n\n");  


    /* Question 1
    The code uses this same series of steps for the rest of the questions. 
    1. Question is printed
    2. User is asked if they would like to use a lifeline (if not already used)
    3. If yes, two possible answers are shown and user must answer
    4. If no, regular four answers are showna and user must answer 
    5. If invalid input, user is asked again if they would like to enter valid input (for everytime user is asked for input)
    6. If the user entered the correct answer, a random congratulations message is printed including how much money the player has won
    7. If wrong, the game ends, a sad message is printed and user is notified to how much money they won
    8. Next question begins and cycle continues   
    */

    correctAnswerFormat = false;
    printf("Question 1: Here is the $100 question\n\nWhat is the University of Guelph's mascot?\n A. Dragon\n B. Centaur\n C. Aggie\n D. Gryphon\n\n");
    
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n C. Aggie\n D. Gryphon\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('C', OR 'D') here: ");
                scanf(" %c", &answer);
                printf("\n");   
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    
    correctAnswerFormat = false;

    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'D')
    {
        playerCash = qOneAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qOneAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qOneAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qOneAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qOneAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qOneAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 0;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    if(lifelineOpen == false)
    {   
        usingLifeline = false;
    }

    correctAnswerFormat = false;

    // Question 2 - Refer to question 1 comments
    
    printf("Question 2: Here is the $500 question\n\nWhat is the name of the cannon that is painted by students?\n A. Old Jeremiah\n B. Painty McPaintFace\n C. George III\n D. Duke of Wellington\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. Old Jeremiah\n D. Duke of Wellington\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'D') here: ");
                scanf(" %c", &answer);
                printf("\n");   
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    
    correctAnswerFormat = false;
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'A')
    {
        playerCash = qTwoAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qTwoAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qTwoAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qTwoAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qTwoAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qTwoAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 100;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }
    
    if(lifelineOpen == false)
    {
        usingLifeline = false;
    }


    // Question 3 - Refer to question 1 comments
    printf("Question 3: Here is the $1000 question\n\nWho was the School of Computer Science building at UoG named after?\n A. Joseph Reynolds\n B. Ryan Reynolds\n C. Joshua Reynolds\n D. Greg Klotz\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. Joseph Reynolds\n B. Ryan Reynolds\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'B') here: ");
                scanf(" %c", &answer);   
                printf("\n");
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        correctAnswerFormat = false;
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'A')
    {
        playerCash = qThreeAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qThreeAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qThreeAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qThreeAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qThreeAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qThreeAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 500;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    if(lifelineOpen == false)
    {
        usingLifeline = false;
    }

    correctAnswerFormat = false;

    // Question 4 - Refer to question 1 comments
       
    printf("Question 4: Here is the $5000 question\n\nHow many brains does an octopus have \n A. 9\n B. 2 \n C. 1 \n D. 16\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. 9\n C. 1\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'C') here: ");
                scanf(" %c", &answer);   
                printf("\n");
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    correctAnswerFormat = false;
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'A')
    {
        playerCash = qFourAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qFourAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qFourAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qFourAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qFourAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qFourAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 1000;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    if(lifelineOpen == false)
    {
        usingLifeline = false;
    }
    
    correctAnswerFormat = false;

    // Question 5 - Refer to question 1 comments
    printf("Question 5: Here is the $10000 question\n\nHow many bones does a shark have ?\n A. 42\n B. 5 \n C. 10 \n D. 0\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. 42\n D. 0\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'D') here: ");
                scanf(" %c", &answer);   
                printf("\n");
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    correctAnswerFormat = false;
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'D')
    {
        playerCash = qFiveAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qFiveAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qFiveAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qFiveAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qFiveAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qFiveAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 5000;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    if(lifelineOpen == false)
    {
        usingLifeline = false;
    }    
    
    correctAnswerFormat = false;

    // Question 6 - Refer to question 1 comments
    printf("Question 6: Here is the $50000 question\n\nWhat is the largest ocean on Earth?\n A. Pacific\n B. Atlantic \n C. Indian \n D. Artctic\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. Pacific\n B. Atlantic\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'B') here: ");
                scanf(" %c", &answer);   
                printf("\n");
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    correctAnswerFormat = false;
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'A')
    {
        playerCash = qSixAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qSixAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qSixAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qSixAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qSixAward);
            printf("Let us play the next question now\n\n");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qSixAward);
            printf("Let us play the next question now\n\n");
        }  
    }
    else
    {
        playerCash = 10000;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    if(lifelineOpen == false)
    {
        usingLifeline = false;
    }
    
    correctAnswerFormat = false;

    // Question 7 - Refer to question 1 comments
    printf("Question 7: Here is the $100,000 question\n\nWhat is the name of the largest fish in the sea?\n A. Blue Whale\n B. Great White Shark \n C. Hammerhead Shark \n D. Whale Shark\n\n");
        
    while(lifelineOpen == true)
    {
        printf("Would you like to use a lifeline (50-50)?\n");
        
        while (correctAnswerFormat == false)
        {
            printf("Enter Y or y, N or n: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'y') | (answer == 'Y'))
            {   
                correctAnswerFormat = true;
                lifelineOpen = false;
                usingLifeline = true;
                printf("OK - here are your 2 choices after using the 50-50 lifeline\n\n A. Blue Whale\n D. Whale shark\n");
                printf("\nReminder - You get only 1 lifeline - and you are using it now\n\n");
                printf("Enter your FINAL ANSWER ('A', OR 'D') here: ");
                scanf(" %c", &answer);   
                printf("\n");
            }
            else if ((answer == 'N') | (answer == 'n'))
            {
                correctAnswerFormat = true;
                lifelineOpen = true;
                usingLifeline = false;
                break;
            } 
            else
            {
                printf("Invalid option entered\n\n");
            }
        }
        break;
    }
    correctAnswerFormat = false;
    
    if((lifelineOpen == true) || (usingLifeline == false))
    {
        while(correctAnswerFormat == false)
        {
            printf("Enter your FINAL ANSWER ('A', 'B', 'C' OR 'D') here: ");
            scanf(" %c", &answer);
            printf("\n");

            if ((answer == 'A') | (answer == 'B') | (answer == 'C') | (answer == 'D'))
            {
                correctAnswerFormat = true;
            }
            else
            {
                printf("Invalid answer. Please enter A, B, C or D.\n\n");
            }
        }
    }
    
    correctAnswerFormat = false;

    if (answer == 'D')
    {
        playerCash = qSevenAward;
        srand (time(NULL));
        randomGen = (rand () % 5) + 1;

        if (randomGen == 1)
        {
            printf("Bravo, you just won $%d.\n", qSevenAward);
            printf("\nIt was fun playing with you");
        }
        else if (randomGen == 2)
        {
            printf("Congrats, you just won $%d.\n", qSevenAward);
            printf("\nIt was fun playing with you");
        }
        else if (randomGen == 3)
        {
            printf("Well done, you just won $%d.\n", qSevenAward);
            printf("\nIt was fun playing with you");
        }
        else if (randomGen == 4)
        {
            printf("Very nice, you just won $%d.\n", qSevenAward);
            printf("\nIt was fun playing with you");
        }
        else if (randomGen == 5)
        {
            printf("Proud of you, you just won $%d.\n", qSevenAward);
            printf("\nIt was fun playing with you");
        }  
    }
    else
    {
        playerCash = 50000;
        printf("Oops - that was incorrect. You won %d dollars, but it was fun playing with you.\n\n", playerCash);
        return 0;
    }

    correctAnswerFormat = false;
    return 0;
}
