#include <stdio.h>

int MAX_FILES = 10;
int MIN_FILES = 1;

struct User
{
        int totalWordsPassed;
        int totalFails;
        int totalCharactersPassed; // set 0;
        int timerSeconds;
        bool timerIsActive;
        int mode; // set 0           // 0 - training, 1 - practice
}

 