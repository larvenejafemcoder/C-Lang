#include <stdio.h>

int main(){
    int score;
    printf("Enter your score (0–100): \n");
    printf("_");
    scanf("%d", &score);

    if (score >= 90) {printf("Grade: A\n");}
    else if (score >= 80) 
	{printf("Grade: B\n");} 
    else if (score >= 70) 
    {printf("Grade: C\n");} 
    else if (score >= 60) 
    {printf("Grade: D\n");} 
    else 
    {printf("Grade: F (uh oh!)\n");}

    return 0;
}
