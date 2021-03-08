#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Our maps
char * maps[] = {"R", "G", "A"};
char * modes[] = {"El", "Es", "Re", "De", "Ho"};

//x is the address of maps[]
char **r = &maps[0];
char **g = &maps[1];
char **a = &maps[2];

//User input that is one int
char userMap1;
char userMap2;
char userMap3;

//The array of final maps that will be called in main
char userFinalMaps[3];

//Our functions to get all individual maps from user input and then call them with getAllMaps
void getMapOne();
void getMapTwo();
void getMapThree();
void getAllMaps();


//main function
int main(void)
{

    getAllMaps();

    return 0;
}

//This function calls all three other map functions
void getAllMaps()
{
    getMapOne();
    getMapTwo();
    getMapThree();

    printf("M1 %s -- M2 %s -- M3 %s\n", &userFinalMaps[0], &userFinalMaps[1], &userFinalMaps[2]);
}


//This gets the first map and places it in to the final map char array at the 0 index
void getMapOne()
{
    //um1 is the address of usermap1
    char *um1;
    um1 = &userMap1;

    //ufm1 is the address of userFinalMaps[0]
    char *ufm1 = &userFinalMaps[0];

    printf("1. \t 2. \t 3. \n");
    fgets(um1, 2, stdin);
    printf("User input was %c\n", *um1);
    if (strcmp(um1, "1") == 0)
    {
        *ufm1 = **r;
        printf("The map is %s\n", ufm1);
    }
    else if (strcmp(um1, "2") == 0)
    {
        *ufm1 = **g;
        printf("The map is %s\n", ufm1);
    }
    else if (strcmp(um1, "3") == 0)
    {
        *ufm1 = **a;
        printf("The map is %s\n", ufm1);
    }
    else
    {
        printf("Error\n");
    }
}


void getMapTwo()
{
    //um1 is the address of usermap2
    char *um2;
    um2 = &userMap2;

    //ufm2 is the address of userFinalMaps[1]
    char *ufm2 = &userFinalMaps[1];

    //User selection menu
    printf("1. \t 2. \t 3. \n");

    //Getting user input from stdin and storing it into um2
    fgets(um2, 2, stdin);

    //Verifying input with a printf
    printf("User input was %c\n", *um2);

    //if statements to assign the chosen map to final maps array
    if (strcmp(um2, "1") == 0)
    {
        *ufm2 = **r;
        printf("The map is %s\n", ufm2);
    }
    else if (strcmp(um2, "2") == 0)
    {
        *ufm2 = **g;
        printf("The map is %s\n", ufm2);
    }
    else if (strcmp(um2, "3") == 0)
    {
        *ufm2 = **a;
        printf("The map is %s\n", ufm2);
    }
    else
    {
        printf("Error\n");
    }
}


void getMapThree()
{
    //um3 is the address of usermap3
    char *um3;
    um3 = &userMap3;

    //ufm3 is the address of userFinalMaps[2]
    char *ufm3 = &userFinalMaps[3];

    printf("1. \t 2. \t 3. \n");
    fgets(um3, 2, stdin);
    printf("User input was %c\n", *um3);
    if (strcmp(um3, "1") == 0)
    {
        *ufm3 = **r;
        printf("The map is %s\n", ufm3);
    }
    else if (strcmp(um3, "2") == 0)
    {
        *ufm3 = **g;
        printf("The map is %s\n", ufm3);
    }
    else if (strcmp(um3, "3") == 0)
    {
        *ufm3 = **a;
        printf("The map is %s\n", ufm3);
    }
    else
    {
        printf("Error\n");
    }
}
