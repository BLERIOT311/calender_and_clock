#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
#include "stop_watch.h"
     void stopWatch(){
          int hour, minute,second;
          hour = minute = second = 0;
          
          while(1){
              
              //clear output screen
              system("clear");
              
              printf("\t\t\t\t\t         %02d  : %02d : %02d",hour,minute,second);
              
              fflush(stdout);
              
              second++;
              if(second == 60){
                     minute += 1;
                     second = 0;
              }
              if(minute == 60){
                     hour += 1;
                     minute = 0;
              }
              if(hour == 24){
                     hour = 0;
                     minute =0;
                     second = 0;
              }
              sleep(1);
              
           }   
          } 
    
 
