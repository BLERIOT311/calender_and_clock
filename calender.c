
#include<stdio.h>
#include "calender.h"

int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[] = {" ","\n\n\nJanuary","\n\n\nFebuary","\n\n\nMarch","\n\n\nApril","\n\n\nMay","\n\n\nJune","\n\n\nJuly","\n\n\nAugust","\n\n\nSeptember","\n\n\nOctober","\n\n\nNovember","\n\n\nDecember"};

int inputyear(){
       int year;
       printf("Please enter a year(example: 1999 ):  ");
       scanf("%d",&year);
       return year;
       
}
int determineleapyear(int year){
       if(year % 4== FALSE && year % 100 != FALSE ||year % 400 == FALSE ){
                     days_in_month[2]= 29;
                     return TRUE;
                     
              }
       else {
              days_in_month[2] = 28;
              return FALSE;
       }
       
       
}
int determinedaycode(int year){
       int daycode;
       int d1,d2,d3;
       
       d1=(year - 1.)/4.0;
       d2=(year - 1.)/100.;
       d3=(year - 1.)/400.;
       daycode = (year + d1 - d2 + d3) %7;
       return daycode;
}
void calender (int year, int daycode){
       int month, day;
       for(month =1; month <= 12; month++){
            printf("%s",months[month]);  
            printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");
            
            //correct the position for the first date
            for(day = 1; day<= 1 + daycode * 5;day++)
            {
                     printf(" ");
            }
            //print all the dates for one month
            for(day = 1; day <=days_in_month[month];day++){
              printf("%2d",day);
              //is the day before sat? esle start next line sun.
              if((day + daycode)%7 > 0)printf("   ");
              else
              printf("\n ");
              }
            // set position for next month
            daycode = (daycode + days_in_month[month]) % 7;
            
            }           
              
      
       
}
