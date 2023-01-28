//  ENSF 337 - lab 5 -exercise D

// lab5exD.h

#ifndef lab5ExD_h
#define lab5ExD_h

typedef struct Date {
    int day, month, year;
}Date;

typedef struct Time {
    int second, minute, hour;
}Time;

typedef struct Timestamp{
    Date date;
    Time *time;
}Timestamp;


void change_date_time(Date *d, Time *t);

#endif /* lab5ExD_h */
