#include <stdio.h>
int main(void)
{
    int score;
    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
    switch (score)
    {
    case 90 ... 100:
        printf("Grade: A");
        break;
    case 80 ... 89:
        printf("Grade: B");
        break;
    case 70 ... 79:
        printf("Grade: C");
        break;
    case 60 ... 69:
        printf("Grade: D");
        break;
    case 0 ... 59:
        printf("Grade: F");
        break;
    default:
        printf("Invalid score. Please enter a score between 0 and 100.");
        break;
    }
}