#include<stdio.h>
int main()
{
    int A,B,C;

    printf("Enter the points from kills: ");
    scanf("%d",&A);
    printf("Enter the points from assists: ");
    scanf("%d",&B);
    printf("Enter the points from objectives: ");
    scanf("%d",&C);

    if (A > B && A > C){
        printf("Final Score: %d",A+A);
    } else if (B > A && B > C){
        printf("Final Score: %d",B+B);
    } else if (C > A && C > B){
        printf("Final Score: %d",C+C);
    } else if (A == B && B == C){
        printf("Final Score: %d",3*(A+B+C));
    } else {
        if (A == B){
            printf("Final Score: %d",A+B);
        } else if (B == C){
            printf("Final Score: %d",B+C);
        } else {
            printf("Final Score: %d",A+C);
        }
    }
    return 0;
}
