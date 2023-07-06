#include<stdio.h>
#include<string.h>
int main()
{
        
        printf("Hello this is program for calculating your GPA\n");
        printf("so Used Capital letter \nfor example A,A+ etc..\nThank you.. ");
        
        char grade[10];
       
        float total=0;
        
        float Marks=0;
        
        float totalhour=0;
        
        float credithour=0;
        
        float FinalGpa;
   
        int courses;
        
    printf("\nPlease Enter Number of sujects/courses: ");
    scanf("%d",&courses) ;//input subjects
    for(int i= 1; i<=courses;i++)//loop start till selection of subjects.
    {
        printf("Please Enter your grade in subject: (%d) \n",i );
        scanf("%s",grade);
        printf("Please Enter your Credit hour of  subject: (%d) \n",i);
        scanf("%d",&credithour);
        totalhour=totalhour+credithour;
        if ( strcmp(grade,"A" ) == 0 )//compare grade with string...
        {
            Marks=4.0;
        }
        else if (strcmp (grade , "A-")==0)
        {
            Marks=3.67;
        }
          else if (strcmp (grade , "B+")==0)
        {
            Marks=3.33;
        }
          else if (strcmp (grade , "B")==0)
        {
            Marks=3.0;
        }
          else if(strcmp (grade , "B-")==0)
        {
            Marks=2.67;
        }
          else if (strcmp (grade , "C+")==0)
        {
            Marks=2.33;
        }
          else if (strcmp (grade , "C")==0)
        {
            Marks=2.0;
        }
          else if (strcmp (grade , "C-")==0)
        {
            Marks=1.67;
        }
          else if (strcmp (grade , "D+")==0)
        {
            Marks=1.33;
        }
          else if (strcmp (grade , "D+")==0)
        {
            Marks=1.00;
        }
          else if (strcmp (grade , "F")==0)
        {
            Marks=0;
        }
        else{
        printf("invaild input\n");
        break;
        }
    
     total=total+Marks*credithour;
     
    }
FinalGpa=total/totalhour;
printf("Your GPA is %.2f ",FinalGpa);
if(FinalGpa>=2.0)
{
    printf("\ncongraulation You have passed the courses...");
}
else
printf("\noops try Again ");

return 0;
}