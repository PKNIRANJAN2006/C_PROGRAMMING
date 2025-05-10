#include<stdio.h>
void main()
{
int height;
printf("Enter ther height of a person in cm \n");
scanf("%d",&height);
if(height>180)
printf("this person belongs to tall category \n");
else if ((0<height) && (height<150))
printf("this person belongs to short category\n");
else if ((150<=height) && (height<=180))
printf("this person belongs to moderate category\n");
else 
printf("enter the correct height\n");
}
