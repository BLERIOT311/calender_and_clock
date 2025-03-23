time: time.o calender.o current_time.o stop_watch.o
	gcc time.o calender.o current_time.o stop_watch.o -o time

time.o: time.c calender.h current_time.h stop_watch.h
	gcc -c time.c

calender.o: calender.c calender.h
	gcc -c calender.c

current_time.o: current_time.c current_time.h
	gcc -c current_time.c

stop_watch.o: stop_watch.c stop_watch.h
	gcc -c stop_watch.c

clean:
	rm *.o time

