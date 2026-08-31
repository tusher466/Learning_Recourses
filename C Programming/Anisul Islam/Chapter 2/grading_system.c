#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 80)
    {
        printf("CGPA: 4.00 -> (A+)\n");
        printf("Grade Description: Outstanding\n");
        printf("Now you are enjoing 50%% Waiver\n");
    }

    else if(marks >= 75)
    {
        printf("CGPA: 3.75 -> (A)\n");
        printf("Grade Description: Excellent\n");
        printf("Now you are enjoing (hisab kore dekha lagbo)%% Waiver\n");
    }

    else if(marks >= 70)
    {
        printf("CGPA: 3.50 -> (A-)\n");
        printf("Grade Description: Very Good\n");
        printf("Now you are enjoing (hisab kore dekha lagbo)%% Waiver\n");
    }

    else if(marks >= 65)
    {
        printf("CGPA: 3.25 -> (B+)\n");
        printf("Grade Description: Good\n");
        printf("Now you are enjoing (hisab kore dekha lagbo)%% Waiver\n");
    }

    else if(marks >= 60)
    {
        printf("CGPA: 3.00 -> (B)\n");
        printf("Grade Description: Satisfactory\n");
        printf("Now you are enjoing life chill Waiver\n");
    }

    else if(marks >= 55)
    {
        printf("CGPA: 2.75 -> (B-)\n");
        printf("Grade Description: Above Average\n");
        printf("Now you are enjoing pera nai chill life Waiver\n");
    }

    else if(marks >= 50)
    {
        printf("CGPA: 2.50 -> (C+)\n");
        printf("Grade Description: Average\n");
        printf("Now you are enjoing pora lekha kora dorkar Waiver\n");
    }

    else if(marks >= 45)
    {
        printf("CGPA: 2.25 -> (C)\n");
        printf("Grade Description: Below Average\n");
        printf("Now you are enjoing khub kharap obosta(je kono din fail r shate dekha hobe) Waiver\n");
    }

    else if(marks >= 40)
    {
        printf("CGPA: 2.00 -> (C-)\n");
        printf("Grade Description: 	Pass\n");
        printf("Now you are enjoing Tene Tune Pass (Fail asbe khuuub drutoooo) Waiver\n");
    }

    else if(marks < 40 && marks >= 0)
    {
        printf("CGPA: 0.00 -> (F)\n");
        printf("Grade Description: Fail\n");
        printf("Now you are enjoing Babar onek tk (Don't care CG) Waiver\n");
    }

    else
    {
        printf("Invalid Marks!!\n");
    }

    return 0;
}