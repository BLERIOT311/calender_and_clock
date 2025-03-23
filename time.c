#include<stdio.h>
#include <stdlib.h>
#include "stop_watch.h"
#include "calender.h"
#include "current_time.h"
#include<unistd.h>

int main(){
  int t,s;
  do{
       system("clear");
       sleep(1/2);
       printf("---------- DATE AND TIME -----------\n\n");
       printf("----------SELECT AN OPTION--------");
       printf("\n\n1. Calender\n2.time\n3.timmer\n4.exit\n\n:");
       
       
       s=0;
       scanf("%d",&t);
       
       switch(t){
              case 1:
                     while(s!=1) {
                            system("clear");
                            sleep(1);
                            int year,daycode;
                            year = inputyear();
                            daycode = determinedaycode(year);
                            calender(year,daycode);
                            printf("\n");
                            printf("\n\n\n<<<BACK(press 1)>>>>\n\n\n<<<<(press any number to continue)>>>> : ");
                            scanf("%d",&s);
                            }
                     break;
              case 2:
                     while(s!=1){
                            system("clear");
                            sleep(1);
                            currentTime();
                            printf("\n\n\n\n\n<<<<<<<<<<<<<BACK(press 1):");
                            scanf("%d",&s);
                    }
                     break;
              case 3:
                     while(s!=1){
                            system("clear");
                            sleep(1);
                            stopWatch();
                            
                     }
                     break;
              case 4:
                     system("clear");
                     sleep(1);
                     t=10;
                     break;
              default:
                     printf("\n\n\t\t\t\t\t\ttWrong option !!!!!!\n\n\n\n\n\n\n");
                     s=1;
                     break;
                     
       }
      }while(s==1 || t!=10);
      
      return 0;
}
