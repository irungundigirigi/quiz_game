#include <stdio.h>

int main ()
{
    char i;
    char ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total11,total12,total13;

    printf(" Welcome to the Quiz Game.");
    printf(" \n Press 7 then Enter to start ");
    printf("\n Press 0 then Enterto quit ");

    scanf("%d",&i);

    if(i==7) {
        printf("Game started \n\n");
    }
    else if(i==0){
        printf("Game Ended \n\n");
    }
    else {
        printf("Invalid Input \n\n");
    }

    if(i==7)
    {
        /* Question 1 */
        printf("1) Which is the first search engine in the internet? \n\n");
        printf("1) Google \n");
        printf("2) Archie \n");
        printf("3) Altavista \n");
        printf("4) Wais \n");

        printf("Enter your answer : ");
        scanf("%d",&ans1);

        if(ans1==2) {
            printf("Correct answer \n");
            point1 = 5;
            printf("You have scored %d points \n", point1);

        }else {
            printf("Wrong answer");
            point01 = 0;
            printf("You have scored %d points \n",point01);
        }

         /* Question 2 */
        printf("1) Which is the first web browser invented in 1990? \n\n");
        printf("1) Internet Explorer \n");
        printf("2) Mosaic \n");
        printf("3) Mozilla \n");
        printf("4) Nexus \n");

        printf("Enter your answer : ");
        scanf("%d",&ans2);

        if(ans2==4) {
            printf("Correct answer \n");
            point2 = 5;
            printf("You have scored %d points \n", point2);

        }else {
            printf("Wrong answer");
            point02 = 0;
            printf("You have scored %d points \n",point02);
        }

         /* Question 3*/
        printf("1) Which is the first web browser invented in 1990? \n\n");
        printf("1) Internet Explorer \n");
        printf("2) Mosaic \n");
        printf("3) Mozilla \n");
        printf("4) Nexus \n");

        printf("Enter your answer : ");
        scanf("%d",&ans2);

        if(ans2==4) {
            printf("Correct answer \n");
            point2 = 5;
            printf("You have scored %d points \n", point2);

        }else {
            printf("Wrong answer");
            point02 = 0;
            printf("You have scored %d points \n",point02);
        }



    }
}