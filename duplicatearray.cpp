#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[20];
for (int i=0;i<20;i++)
                {
                cout<<"enter the element no "<<i+1<<endl;
                cin>>arr[i];
                }

for (i=0;i<20;i++)
                {
                for (int j=0;j<20;j++)
                                {
                                if (i!=j)
                                {
                                                if (arr[i]==arr[j])
                                                arr[j]=0;
                                                else
                                                continue;
                                }
                                else
                                continue;
                                }
                }

for (i=0;i<20;i++)
                {
                if (arr[i]<=100&&arr[i]>=10)
                cout<<arr[i]<<endl;
                else
                continue;
                }

getch();
}