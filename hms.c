 #include <stdio.h>
int main()
{	
int hours,mins,secs;
 printf("Enter  seconds: ");
scanf("%d",&secs);
	        
hours = secs/3600; //hour contain 3600.
	        
secs=secs%3600;
mins=secs/60;
secs=secs%60;
	
	        
printf("hours:%d, mins:%d, secs:%d \n",hours,mins,secs);
	        
return 0;
}
